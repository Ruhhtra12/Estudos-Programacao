const ServicesImport = require("../Services/Pessoa")

const Services = new ServicesImport()

class ControllerPessoa{
    PegarTodos(Req,Res){        
        try{
            const nomes = Services.PegarTodos()
            Res.status(200).send({nomes})}
        catch(Error){
            console.error("Rodou fiu")                
            Res.status(500).send({
                Error: Error.message
            })
        }
    }
    PegarUm(Req,Res){        
        try{
            const Index = Req.params.Index
            const Busca = Services.PegarUm(Index)
            Res.status(200).send({Busca})}
        catch(Error){
            console.error("Não foi possivel pegar um")                
            Res.status(500).send({
                Error: Error.message
            })
        }
    }
    AdicionarElemento(Req,Res){        
        try{
            const Elemento = Req.body.Elemento
            Services.AdicionarElemento(Elemento)
            Res.status(200).send("Foi adicionado o elemento: "+ Elemento)}
        catch(Error){
            console.error("Rodou fiu")                
            Res.status(500).send({
                Error: Error.message
            })
        }
    }
    DeletarElemento(Req,Res){
        try{
            const Elemento = Req.params.Elemento
            Services.DeletarElemento(Elemento)
            Res.status(200).send("Foi deletado o elemento: "+ Elemento)
        }
        catch(Error){
            Res.status(500).send({
                Error: Error.message
            })
        }
    }
    
}

module.exports = ({
    ControllerPessoa
})