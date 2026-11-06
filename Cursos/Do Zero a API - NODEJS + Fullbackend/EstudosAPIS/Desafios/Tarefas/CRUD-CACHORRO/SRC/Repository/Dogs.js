const fs = require('fs')
const {stringify} = require('csv-stringify')
const { parse } = require('csv-parse/sync');
const path = require('path');

class Repository{
    GetAllDogs(){
        const conteudo = fs.readFileSync(path.join(__dirname, '../DB/DB.csv'), 'utf-8');
        const data = parse(conteudo, { delimiter: "," });
        return data;
    }
}

module.exports = Repository
