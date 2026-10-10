import * as readline from 'node:readline/promises'
import {stdin as input, stdout as output} from 'node:process'

const Rl = readline.createInterface({input,output})

let Valor = await Rl.question("Digite o angulo que quer achar o Seno: ")
Rl.close()
//deixar o valor "LIMPO"

Valor = Valor % 360

const PI = 3.141592653589793
//Transformar para Radianos
const Radianos = (Valor * PI) / 180

const QntdOperacoes = 10
let x = Radianos

for(let i = 0; i <= QntdOperacoes;i++){
    let Opr = 3 + 2*i

   let Emcima = Radianos ** Opr

    let Fatorial = 1
    for(let j = 1 ; j <= Opr; j = j + 1){
        Fatorial *= j
    }

   let Operacao = Emcima / Fatorial

    console.log(`${i + 1}° - Termo: ${Operacao}`)
    if(i % 2 == 0){
    x = x - Operacao
    }else{ 
    x = x + Operacao
    }


}   
console.log(`O valor de SEN(${Valor}) = ${x}`)