let BancoDeDados = new Array("Arthur","Vitoria","Alexandre","Adivania")

class Services {
    PegarTodos(){
        const Banco = BancoDeDados
        if(Banco.length == 0){
            throw new Error("Não há nenhum registro no banco")
        }
        return Banco
    }

    PegarUm(index){
        const Banco = BancoDeDados
        if(Banco.length == 0){
            throw new Error("Não há nenhum registro no banco")
        }
        if(Banco[index] == null){
            throw new Error("Não há esse registro no banco")
        }
        return Banco[index]
    }
    
    AdicionarElemento(Elemento){
        BancoDeDados.push(Elemento)
    }
    DeletarElemento(Elemento){
        const Index = BancoDeDados.indexOf(Elemento)
        if(Index == -1){
            throw new Error("Não existe esse valor")
        }
        BancoDeDados.splice(Index,1)
    }
}

module.exports =  Services