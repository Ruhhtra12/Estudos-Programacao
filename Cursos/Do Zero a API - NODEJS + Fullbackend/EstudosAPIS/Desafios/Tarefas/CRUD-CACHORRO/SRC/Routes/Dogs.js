const Express = require("express")
const controller  = require("../Controllers/Dogs")

const Controller =  new controller

const Router = Express.Router() 

Router.get("/API/V1/AllDogs", (req,res)=>{Controller.PegarTodos(req,res)})
Router.get("/API/V1/Dog/:id", ()=>{})
Router.post("/API/V1/Dog/Add", ()=>{})
Router.put("/API/V1/Dog/Update", ()=>{})
Router.delete("/API/V1/Dog/Delete/:id", ()=>{})

module.exports = Router