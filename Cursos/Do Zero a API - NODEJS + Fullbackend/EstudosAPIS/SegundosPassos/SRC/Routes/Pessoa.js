const express = require("express")
const { ControllerPessoa } = require("../Controllers/Pessoa")

const router = express.Router()

const Controller = new ControllerPessoa

router.get("/API/V1/nomes",(Req,Res)=>{ Controller.PegarTodos(Req, Res)
})

module.exports = router