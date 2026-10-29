let BancoDeDados = new Array("Joao","Maria","Cleidiane","Arthur","Claudio")

class Repository{
    RetornarBanco(){
        const Banco = BancoDeDados
        return Banco} 
    AdcionarElemento(Elemento){
        BancoDeDados.push(Elemento)
    }
    PegarIndex(Elemento){
        const Result = BancoDeDados.indexOf(Elemento)
        return Result}
    DeletarElemento(Index){
        BancoDeDados.splice(Index,1)
    }
}


module.exports = Repository