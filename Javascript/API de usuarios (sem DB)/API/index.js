require('dotenv').config()
const express = require('express')
const server = express()
server.use(express.json())

const PORT = process.env.PORT || 3000

const fs = require('fs')
const fakeDB = fs.readFileSync('users.json')
const users = JSON.parse(fakeDB)

const getUser = id => {
  return users.find(usr => usr.id === id)
}

const createUser = user => {
  user.id = users.length
  const id = users.find(usr => usr.id === user.id)

  if (id) {
    user.id = users[users.length - 1].id + 1
  }

  user.createdAt = (new Date()).toString()

  users.push(user)

  const newUser = JSON.stringify(users, null, 2)
  fs.writeFileSync('users.json', newUser)
}

const changeUser = (alteration, id) => {
  const indexId = users.findIndex(usr => usr.id === id)
  const { name, email, password } = alteration

  if (name) users[indexId].name = name
  if (email) users[indexId].email = email
  if (password) users[indexId].password = password

  users[indexId].updatedAt = (new Date()).toString()

  const userAlteration = JSON.stringify(users, null, 2)
  fs.writeFileSync('users.json', userAlteration)
}

const deleteUser = id => {
  const indexId = users.findIndex(usr => usr.id === id)

  users.splice(indexId, 1)

  const userDeleted = JSON.stringify(users, null, 2)
  fs.writeFileSync('users.json', userDeleted)
}

server.listen(PORT, () => {
  console.log(`Listening at http://localhost:${PORT}`)
})

server.get('/users', (req, res) => {
  res.json(users)
})

server.get('/users/:id', (req, res) => {
  const id = Number(req.params.id)
  const user = getUser(id)

  if (!user) {
    return res.status(404).send()
  }

  res.json(user)
})

server.post('/users', (req, res) => {
  const user = req.body
  const email = users.find(usr => usr.email === user.email)
  const emailRegex = /^([^@\s]+)@((?:[-a-z0-9]+\.)+[a-z]{2,})$/i
  const validEmail = emailRegex.test(user.email)

  if (email || !validEmail) {
    return res.status(400).send()
  }

  createUser(user)
  res.send('Usuario criado com sucesso!')
})

server.put('/users/:id', (req, res) => {
  const id = Number(req.params.id)
  const user = getUser(id)
  const userAlteration = req.body

  if (!user) {
    return res.status(404).send()
  }

  changeUser(userAlteration, id)
  res.send('Usuario alterado com sucesso!')
})

server.delete('/users/:id', (req, res) => {
  const id = Number(req.params.id)
  const user = getUser(id)

  if (!user) {
    return res.status(404).send()
  }

  deleteUser(id)
  res.send('Usuario deletado com sucesso!')
})
