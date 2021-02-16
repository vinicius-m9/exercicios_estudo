### EXERCÍCIO:

Crie um servidor HTTP para gerenciar usuários com as seguintes rotas:

- GET /users -> Retorna todos os usuários cadastrados
- GET /users/:id -> Retorna um único usuário por ID ou Status 404 (Not Found) se o usuário não existir.
- POST /users -> Cria um novo usuário com as informações contidas no BODY da requisição.
- PUT /users/:id -> Altera um único usuário por ID com as informações contidas no BODY da requisição. Retorne 404 (Not Found) caso o usuário não exista.
- DELETE /users/:id -> Deleta um usuário pelo seu ID. Retorna 404 (Not Found) caso o usuário não exista.

PREMISSAS:

- Como não utilizaremos banco de dados, todos os usuários poderão ser armazenados em um array. (AVISO: Nesse caso, reiniciar a aplicação apagará as alterações no array).
- A estrutura de um usuário é a seguinte:
 {
   id: 12345, 
   name: 'User',
   email: 'user@email.com',
   password: 'pass123'
 }
- Gere o ID automaticamente no código (o ID não será enviado na request).
- NÃO PODEM existir usuários com o mesmo ID ou E-mail. Caso a requisição tente criar um usuário com o e-mail já usado, retorne status 400 (Bad Request).
