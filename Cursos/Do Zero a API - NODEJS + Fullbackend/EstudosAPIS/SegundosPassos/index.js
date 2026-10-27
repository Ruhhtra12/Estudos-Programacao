const Express = require("express")
const app = Express()
const routers = require("./SRC/Routes/Pessoa")

app.use(Express.json())

app.use(routers)

app.listen(
    3000, ()=>{
        console.log(`Server rodando - Porta: 3000`)
    }
)

 