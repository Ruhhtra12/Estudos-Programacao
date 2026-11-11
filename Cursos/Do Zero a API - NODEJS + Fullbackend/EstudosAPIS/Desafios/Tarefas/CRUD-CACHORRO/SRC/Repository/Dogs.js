const fs = require('fs')
const csv_parse = require('csv-parse/sync');
const csv_parse = require('csv-stringify');
const path = require('path');
const { stringify } = require('querystring');

const CaminhoDB = path.join(__dirname, '../DB/DB.csv')

class Repository{
    GetAllDogs(){
        let conteudo = fs.readFileSync(CaminhoDB, 'utf-8');
        let data = csv_parse.parse(conteudo, { delimiter: ";",columns:true});
        return data;
        
    }
    GetDogById(id){
        let conteudo = fs.readFileSync(CaminhoDB, 'utf-8');
        let data = csv_parse.parse(conteudo, { delimiter: ";",columns:true});
        const result = data.filter(dog => dog.id == id)
        return result;
        
    }
    AddDog(id,name,age){
        let inserction = `\n${id};${age};${name}`
        fs.appendFileSync(CaminhoDB,inserction,'utf-8')
    }
    UpdateDog(id,name,age){
        let conteudoantigo = fs.readFileSync(CaminhoDB,'utf-8')
        let data = csv_parse.parse(conteudoantigo,{delimiter:";",columns:true})
        let DogEncontrado = data.filter(dog => dog.id == id)
        if(!DogEncontrado == []){ DogEncontrado.forEach(element => {
            element.name = name,
            element.age = age})
        }else{
            throw new Error("Não foi possível encontrar esse registro")
        }
        
    }
}

module.exports = Repository
