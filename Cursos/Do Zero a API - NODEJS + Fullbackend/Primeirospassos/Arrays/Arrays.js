import * as readline from "node:readline/promises";
import {stdin as input, stdout as output} from "node:process"


const rl = readline.createInterface({input, output})
let ArrayAlturas = [];

console.log("Digite a altura das pessoas para calcular a média[0 - fechar]")
for(let i = 0; ArrayAlturas[i - 1] != 0; i++){
    ArrayAlturas.push( await rl.question(`${i + 1}° Pessoa - Altura: `))
    if(ArrayAlturas[i] == 0){
        ArrayAlturas.pop()
        break;
    }
}
rl.close()
let media = 0
ArrayAlturas.forEach(item =>{
    media += Number(item)
})
media = media / (ArrayAlturas.length)
console.log(`Quantidade de pessoas informadas: ${ArrayAlturas.length}`)
console.log(`Media das alturas informadas: ${media}`)