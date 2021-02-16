require('dotenv').config()
const express = require('express')
const server = express()
server.use(express.json())

const PORT = process.env.PORT || 3000
const users = []

server.listen(PORT, () => {
  console.log(`Listening at http://localhost:${PORT}`)
})

server.get('/users', (req, res) => {
  res.json(users)
})

server.get('/users/:id', (req, res) => {
  const id = Number(req.params.id)
  const user = users.find(usr => usr.id === id)

  if (!user) {
    return res.status(404).send()
  }

  res.json(user)
})

server.post('/users', (req, res) => {
  const user = req.body
  const email = users.find(usr => usr.email === user.email)

  if (email) {
    return res.status(400).send()
  }

  user.id = users.length
  const id = users.find(usr => usr.id === user.id)

  if (id) {
    user.id = users[users.length - 1].id + 1
  }

  users.push(user)
  res.send('Usuario criado com sucesso!')
})

server.put('/users/:id', (req, res) => {
  const id = Number(req.params.id)
  const indexId = users.findIndex(usr => usr.id === id)

  if (indexId === -1) {
    return res.status(404).send()
  }
  const userAlteration = req.body
  const { name, email, password } = userAlteration

  if (name) users[indexId].name = name
  if (email) users[indexId].email = email
  if (password) users[indexId].password = password

  res.send('Usuario alterado com sucesso!')
})

server.delete('/users/:id', (req, res) => {
  const id = Number(req.params.id)
  const indexId = users.findIndex(usr => usr.id === id)

  if (indexId === -1) {
    return res.status(404).send()
  }

  users.splice(indexId, 1)
  res.send('Usuario deletado com sucesso!')
})
