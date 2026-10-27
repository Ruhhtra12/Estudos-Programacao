const Express = require("express")
const {
    APISomar,
    APISubtrair,
    APIMultiplicar,
    APIDividir } 
    = require("./API/Operacoes")

const App = Express()
App.use(Express.json())

const Porta = 9090

App.post('/API/POST/SOMAR',(Request,Response) =>{APISomar(Request,Response)
})
App.post('/API/POST/SUBTRAIR',(Request,Response) =>{APISubtrair(Request,Response)
})
App.post('/API/POST/MULTIPLICAR',(Request,Response) =>{APIMultiplicar(Request,Response)
})
App.post('/API/POST/DIVIDIR',(Request,Response) =>{APIDividir(Request,Response)
})



App.listen( Porta,()=>{
    console.log("Server is running on: "+ Porta)
})
