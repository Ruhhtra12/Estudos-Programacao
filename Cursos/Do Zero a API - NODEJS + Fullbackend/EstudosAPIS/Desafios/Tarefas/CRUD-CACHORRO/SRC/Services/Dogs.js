const repositoryimport = require('../Repository/Dogs.js')

const repository = new repositoryimport
class service{
    GetAllDogs(){return repository.GetAllDogs()}
    GetDogById(id){return repository.GetDogById(id)}
    AddDog(id, name, age){
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