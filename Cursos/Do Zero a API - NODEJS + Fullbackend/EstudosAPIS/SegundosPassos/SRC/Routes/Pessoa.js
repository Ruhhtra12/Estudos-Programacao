const express = require("express")
const { ControllerPessoa } = require("../Controllers/Pessoa")

const router = express.Router()

const Controller = new ControllerPessoa

router.get("/API/V1/nomes",(Req,Res)=>{ Controller.PegarTodos(Req, Res)
})

router.get("/API/V1/nomes/:Index",(Req,Res)=>{Controller.PegarUm(Req,Res)})

router.post("/API/V1/nomes",(Req,Res)=>{ Controller.AdicionarElemento(Req, Res)})

router.delete("/API/V1/nomes/:Elemento",(Req,Res)=>{ Controller.DeletarElemento(Req, Res)})

module.exports = router