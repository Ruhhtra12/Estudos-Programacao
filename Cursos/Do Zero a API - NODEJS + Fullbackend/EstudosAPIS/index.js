const Express = require("express")

const App = Express()
App.use(Express.json())

const Porta = 9090

function Somar(Num1,Num2) {
     const soma = Number(Num1) + Number(Num2)
     return soma
}

App.get('/API/',(Request,Response) =>{
    const { Input1 , Input2 } = Request.query
    const Result = Somar(Input1,Input2)
    Response.status(200).send({"Result":Result})
})

App.listen( Porta,()=>{
    console.log("Server is running on: "+ Porta)
})
