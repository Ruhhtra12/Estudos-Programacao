const RepositoryImport = require("../Repository/Pessoa")

const Repository = new RepositoryImport

class Services {
    PegarTodos(){
        const Banco = Repository.RetornarBanco()
        if(Banco.length == 0){
            throw new Error("Não há nenhum registro no banco")
        }
        return Banco
    }

    PegarUm(index){
        const Banco = Repository.RetornarBanco()
        if(Banco.length == 0){
            throw new Error("Não há nenhum registro no banco")
        }
        if(Banco[index] == null){
            throw new Error("Não há esse registro no banco")
        }
        return Banco[index]
    }
    
    AdicionarElemento(Elemento){
        Repository.AdcionarElemento(Elemento)
    }
    DeletarElemento(Elemento){
        const Index = Repository.PegarIndex(Elemento)
        if(Index == -1){
            throw new Error("Não existe esse valor")
        }
        Repository.DeletarElemento(Index)
    }
}

module.exports =  Services