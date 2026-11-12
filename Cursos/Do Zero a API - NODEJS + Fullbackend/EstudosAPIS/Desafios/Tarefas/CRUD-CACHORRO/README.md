# 🐶 CRUD-CACHORRO

API REST para gerenciamento de cachorros (**CRUD** — Create, Read, Update, Delete), desenvolvida **100% manualmente** como desafio do curso *Do Zero à API (Node.js + Fullbackend)*.

O projeto utiliza uma arquitetura **pseudo-MVC em camadas** (Routes → Controllers → Services → Repository) com persistência local em arquivo **CSV**.

---

## 🛠️ Tecnologias Utilizadas

- **[Node.js](https://nodejs.org/)** (CommonJS)
- **[Express](https://expressjs.com/)** (`^5.3.0`) — roteamento e servidor HTTP
- **[csv-parse](https://csv.js.org/parse/)** (`^7.0.3`) — leitura e conversão de CSV para objetos JavaScript
- **[csv-stringify](https://csv.js.org/stringify/)** (`^6.9.0`) — serialização de objetos JavaScript para CSV
- **[Jest](https://jestjs.io/)** (`^30.5.2`) — dependência preparada para testes futuros

---

## 🧱 Arquitetura e Estrutura de Pastas

O fluxo da requisição segue a separação de responsabilidades abaixo:

```text
Requisição HTTP
   │
   ▼
SRC/Routes/Dogs.js       → Define os endpoints e encaminha para o Controller
   │
   ▼
SRC/Controllers/Dogs.js  → Extrai parâmetros/body e envia a resposta HTTP (status + JSON)
   │
   ▼
SRC/Services/Dogs.js     → Regras de negócio e validação dos campos obrigatórios
   │
   ▼
SRC/Repository/Dogs.js   → Leitura e escrita direta no arquivo CSV via módulo fs
   │
   ▼
SRC/DB/DB.csv            → Base de dados em CSV delimitado por ";"
```

```text
CRUD-CACHORRO/
├── Index.js                 # Ponto de entrada da aplicação e configuração do servidor Express
├── package.json             # Dependências e metadados do projeto
├── Test/                    # Pasta reservada para testes
└── SRC/
    ├── Controllers/
    │   └── Dogs.js          # Camada de controle das requisições
    ├── DB/
    │   └── DB.csv           # Persistência em CSV (colunas: id;age;name)
    ├── Repository/
    │   └── Dogs.js          # Manipulação do arquivo CSV
    ├── Routes/
    │   └── Dogs.js          # Definição das rotas da API (/API/V1/...)
    └── Services/
        └── Dogs.js          # Validações e regras de negócio
```

---

## 🚀 Como Executar o Projeto

1. **Instale as dependências:**
   ```bash
   npm install
   ```

2. **Inicie o servidor:**
   ```bash
   node Index.js
   ```

3. O servidor estará disponível em:
   ```text
   http://localhost:9090
   ```

---

## 📌 Endpoints da API

Base URL: `http://localhost:9090`

| Método | Rota | Descrição | Parâmetros / Body |
| :--- | :--- | :--- | :--- |
| `GET` | `/API/V1/AllDogs` | Lista todos os cachorros cadastrados | — |
| `GET` | `/API/V1/Dog/:id` | Busca um cachorro pelo `id` | Param: `id` |
| `POST` | `/API/V1/Dog/Add` | Cadastra um novo cachorro | Body JSON: `id`, `name`, `age` |
| `PUT` | `/API/V1/Dog/Update` | Atualiza um cachorro existente | Body JSON: `id`, `name`, `age` |
| `DELETE` | `/API/V1/Dog/Delete/:id` | Remove um cachorro pelo `id` | Param: `id` |

### Exemplos de Requisição e Resposta

#### `GET /API/V1/AllDogs`
**Resposta (`200 OK`):**
```json
{
  "Result": [
    { "id": "01", "age": "10", "name": "Alouuiu" },
    { "id": "02", "age": "3", "name": "princesa" }
  ]
}
```

#### `GET /API/V1/Dog/03`
**Resposta (`200 OK`):**
```json
{
  "Result": [
    { "id": "03", "age": "2", "name": "Rex" }
  ]
}
```

#### `POST /API/V1/Dog/Add`
**Body (JSON):**
```json
{
  "id": "51",
  "name": "Bolinha",
  "age": "4"
}
```
**Resposta (`200 OK`):**
```json
{
  "Result": "Adicionado com sucesso"
}
```

#### `PUT /API/V1/Dog/Update`
**Body (JSON):**
```json
{
  "id": "51",
  "name": "Bolinha Silva",
  "age": "5"
}
```
**Resposta (`200 OK`):**
```json
{
  "Result": "Dog updated successfully"
}
```

#### `DELETE /API/V1/Dog/Delete/51`
**Resposta (`200 OK`):**
```json
{
  "Result": "Dog deleted successfully"
}
```

---

## 💾 Formato da Base de Dados (`SRC/DB/DB.csv`)

Os registros são armazenados em texto plano utilizando `;` como delimitador, com o cabeçalho:

```csv
id;age;name
01;10;Alouuiu
02;3;princesa
03;2;Rex
```

---

## 👤 Autor

**Arthur Castro**  
Licença: `ISC`
