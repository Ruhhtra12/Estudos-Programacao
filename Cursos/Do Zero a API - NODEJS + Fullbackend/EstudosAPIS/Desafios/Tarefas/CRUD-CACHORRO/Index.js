const Express = require("express")
const router = require("./SRC/Routes/Dogs")

const app = Express()

const port = 9090

app.use(Express.json())
app.use(router)

app.listen(port,()=>{
    console.log("Server rodando na porta "+port)
})
