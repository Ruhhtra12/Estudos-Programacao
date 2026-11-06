const ServicesImport = require('../Services/Dogs')

const service = new ServicesImport
class controller{
    PegarTodos(req,res){try{
        const Result = service.GetAllDogs()
        res.status(200).send({"Result": Result})}
        catch(error){
            console.error(error)
            res.status(500).send({"Error": error.message})
        }
    }
    PegarUm(req,res){try{
        const id = req.params.id
        Result = service.GetDogById(id)
        res.status(200).send({"Result": Result})}
        catch(error){
            console.error(Error)
            res.status(500).send({"Error": Error.message})
        }
    }
    Adicionar(req,res){try{
        const id = req.body.id
        const name = req.body.name
        const age = req.body.age
        Result = service.AddDog(id, name, age)
        res.status(200).send({"Result": Result})}
        catch(error){
            console.error(Error)
            res.status(500).send({"Error": Error.message})
        }
    }
    Atualizar(req,res){try{
        const id = req.body.id
        const name = req.body.name
        const age = req.body.age
        service.UpdateDog(id, name, age)
        res.status(200).send({"Result": "Dog updated successfully"})}
        catch(error){
            console.error(Error)
            res.status(500).send({"Error": Error.message})
        }
    }
    Deletar(req,res){try{
        const id = req.params.id
        service.DeleteDog(id)          
        res.status(200).send({"Result": "Dog deleted successfully"})}
        catch(error){
            console.error(Error)
            res.status(500).send({"Error": Error.message})
        }
    }
}
module.exports = controller