const { Somar, Subtrair, Multiplicar, Dividir } = require("../Services/Operacoes")
const Express = require("express")

function APISomar(Req,Res){
    try{
        const {Input1,Input2} = Req.body
        const result = Somar(Input1,Input2)
        Res.status(200).send({"Result":result})
    }
    catch{
        Res.status(500).send({"MSG":"Foi obtido um erro"})    
        console.log("Foi obtido um erro")    
    }
}
function APISubtrair(Req,Res){
    try{
    const {Input1,Input2} = Req.body
    const result = Subtrair(Input1,Input2)
    Res.status(200).send({"Result":result})
    }
    catch{
        Res.status(500).send({"MSG":"Foi obtido um erro"})    
        console.log("Foi obtido um erro")    
    }

}
function APIMultiplicar(Req,Res){
    try{
    const {Input1,Input2} = Req.body
    const result = Multiplicar(Input1,Input2)
    Res.status(200).send({"Result":result})
    }
    catch{
        Res.status(500).send({"MSG":"Foi obtido um erro"})    
        console.log("Foi obtido um erro")    
    }
}
function APIDividir(Req,Res){
    try{
    const {Input1,Input2} = Req.body
    const result = Dividir(Input1,Input2)
    Res.status(200).send({"Result":result})
    }
    catch(error)
    {
        const MSG = error.message
        Res.status(400).send({"MSG": MSG})    
        console.log("Foi obtido um erro")
    }
}

module.exports = {
    APIDividir,
    APISomar,
    APISubtrair,
    APIMultiplicar
}