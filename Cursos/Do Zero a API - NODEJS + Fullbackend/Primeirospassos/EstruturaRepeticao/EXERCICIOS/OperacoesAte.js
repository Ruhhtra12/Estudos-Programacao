import * as readline from 'node:readline/promises'
import { stdin as input, stdout as output } from 'node:process'

const rl = readline.createInterface(input,output)

let ValorFinal = await rl.question("Digite o ultimo digito da operação: ")

rl.close()
let Subtracao = 0, Soma = 0

for(let i = 0; i <= ValorFinal; i++){
    if(i % 2 == 1){Subtracao -= i}else{
    Soma += i}
}
console.log(`Valor da Subtração: ${Subtracao}`)
console.log(`Valor da Soma: ${Soma}`)

