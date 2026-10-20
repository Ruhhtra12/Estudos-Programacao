const Express = require('express')
const app = Express()

const Porta = 3000

app.get('/api/Soma',(req,res) => {
    
    const {Num1,Num2} = req.query
    res.send(Num1 + " " + Num2)

})

app.listen(Porta, ()=> {    
    console.log(`Servidor rodando na porta: ${Porta}`)
})