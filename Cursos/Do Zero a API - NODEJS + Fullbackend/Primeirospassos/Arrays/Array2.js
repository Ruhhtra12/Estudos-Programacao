import * as readline from "node:readline/promises";
import { stdin as input, stdout as output} from "node:process";

const rl = readline.createInterface({input,output})

let Nome, Nota, Turma
let Boletim = []

console.log("Digite o nome do aluno e sua nota")

function CalcTurma(Array,Turma){
    let Soma = 0, Media, Qntd = 0, Maior = 0, Maior_nome
    Array.forEach(Elemento => {
        if(Elemento.Turma == Turma){
            Soma = Soma + Number(Elemento.Nota)
            Qntd++
        }
        if(Elemento.Nota > Maior ){
            Maior = Elemento.Nota
                

        }
   });
   Media = Soma / Qntd
   return Media
}


for(let i = 0; Nome != "" ;i++)  
    {
    console.log("---------------------------------------------")
    console.log(`Aluno: ${i + 1} - [0 - fechar]`)
    Nome = await rl.question("Nome do Aluno: ")
    if(Nome == 0){
        console.log("---------------------------------------------")        
        break}
    Turma = await rl.question("Turma do Aluno: ")
    Nota = await rl.question("Nota do Aluno: ")
    console.log("---------------------------------------------\n")
    Boletim.push({
        Nome: Nome,
        Turma: Turma,
        Nota: Nota
    })
}

console.log(Boletim)
rl.close()    