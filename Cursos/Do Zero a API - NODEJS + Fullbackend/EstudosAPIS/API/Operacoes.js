const { Somar, Subtrair, Multiplicar, Dividir } = require("../Services/Operacoes")
const Express = require("express")

function APISomar(Req,Res){
    const {Input1,Input2} = Req.body
    const result = Somar(Input1,Input2)
    Res.status(200).send({"Result":result})
}
function APISubtrair(Req,Res){
    const {Input1,Input2} = Req.body
    const result = Subtrair(Input1,Input2)
    Res.status(200).send({"Result":result})
}
function APIMultiplicar(Req,Res){
    const {Input1,Input2} = Req.body
    const result = Multiplicar(Input1,Input2)
    Res.status(200).send({"Result":result})
}
function APIDividir(Req,Res){
    const {Input1,Input2} = Req.body
    const result = Dividir(Input1,Input2)
    Res.status(200).send({"Result":result})
}

module.exports = {
    APIDividir,
    APISomar,
    APISubtrair,
    APIMultiplicar
}