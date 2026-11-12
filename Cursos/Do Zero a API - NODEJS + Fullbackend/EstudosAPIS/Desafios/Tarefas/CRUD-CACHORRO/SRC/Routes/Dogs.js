const Express = require("express")
const controller  = require("../Controllers/Dogs")

const Controller =  new controller

const Router = Express.Router() 

Router.get("/API/V1/AllDogs", (req,res)=>{Controller.PegarTodos(req,res)})
Router.get("/API/V1/Dog/:id", (req,res)=>{Controller.PegarUm(req,res)})
Router.post("/API/V1/Dog/Add", (req,res)=>{Controller.Adicionar(req,res)})
Router.put("/API/V1/Dog/Update", (req,res)=>{Controller.Atualizar(req,res)})
Router.delete("/API/V1/Dog/Delete/:id", (req,res)=>{Controller.Deletar(req,res)})

module.exports = Router