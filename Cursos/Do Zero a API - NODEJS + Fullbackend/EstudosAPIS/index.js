const Express = require('express')
const app = Express()

const Porta = 3000

app.use(Express.json())

app.get('/api/Soma',(req,res) => {
    
    const {Num1,Num2} = req.body
    res.send(Num1 + " " + Num2)

})
app.post('/api/Editar',(req,res) => {

    const {Num1,Num2} = req.body
    res.status(200).send({
        "Result":(Num1 + Num2)
    })
    console.log(req.body)

})

app.listen(Porta, ()=> {    
    console.log(`Servidor rodando na porta: ${Porta}`)
})