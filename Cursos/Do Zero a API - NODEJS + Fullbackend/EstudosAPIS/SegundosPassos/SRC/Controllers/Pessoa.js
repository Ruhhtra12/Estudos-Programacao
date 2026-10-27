const ServicesImport = require("../Services/Pessoa")

const Services = new ServicesImport()

class ControllerPessoa{
    PegarTodos(Req,Res){        
        try{
            const nomes = Services.PegarTodos()
            Res.status(200).send(nomes)}
        catch(Error){
            console.error("Rodou fiu")                
            Res.status(500).send({
                Error: Error.message
            })
        }
    }
}

module.exports = ({
    ControllerPessoa
})