import * as readline from 'node:readline/promises'
import {stdin as input, stdout as output} from 'node:process'

const rl = readline.createInterface({input, output})

let UserInput = await rl.question("Digite o Número que quer o fatorial: ")
rl.close()

console.log(`\nNúmero escolhido: ${UserInput}`)
let Fatorial = 1
for(let i = 1; i <= UserInput; i++){
    Fatorial *= i
}
console.log(`Fatorial calculado: ${Fatorial}`)