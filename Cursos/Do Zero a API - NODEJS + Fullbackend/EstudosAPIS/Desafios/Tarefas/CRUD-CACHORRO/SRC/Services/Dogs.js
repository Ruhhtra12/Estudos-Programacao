const repositoryimport = require('../Repository/Dogs.js')

const repository = new repositoryimport
class service{
    GetAllDogs(){
        const data = repository.GetAllDogs()
        console.log(data)
        if(data.length ===  0)throw new Error("Não há mais conteúdo")
        return data }
    GetDogById(id){
        const data = repository.GetDogById(id)
        if(data.length ===  0)throw new Error("Não há conteudo com esse id");
        return data}
    AddDog(id, name, age){
        repository.AddDog(id,name,age)
        if(!id || !name || !age) {throw new Error("Faltam os campos obrigatórios: id, name e age")}
        repository.AddDog(id, name, age)}
    UpdateDog(id, name, age){
        if(!id || !name || !age) {throw new Error("Faltam os campos obrigatórios: id, name e age")}
        repository.UpdateDog(id, name, age)}
    DeleteDog(id){ 
        if(!id) {throw new Error("Falta o campo obrigatório: id")}
        repository.DeleteDog(id)}
}
module.exports = service