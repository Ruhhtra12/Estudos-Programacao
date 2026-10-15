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
            if(Elemento.Nota > Maior ){
                Maior = Elemento.Nota
            }
        }
   });
   Media = Soma / Qntd
   return {
    Maior: Maior,
    Media: Media,
    Qntd: Qntd
   }
}
function ImprimirTurmas(Array){
    let Turmas = []
    Array.forEach(Elemento => {
    if(!Turmas.includes(Elemento.Turma)){
        Turmas.push(Elemento.Turma)
                                        }
    
                                }
                    )
    Turmas.forEach(Turma => {
    console.log("---------------------------------------------")
    console.log(`Turma: ${Turma}`)
        let Saidas = CalcTurma(Array,Turma)
        console.log(`Qntd de notas: ${Saidas.Qntd}`)
        console.log(`maior nota: ${Saidas.Maior}`)
        console.log(`media de notas: ${Saidas.Media}`)
        console.log("---------------------------------------------\n")
        
        }
    )

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
        Nota: Number(Nota)
    })
}

ImprimirTurmas(Boletim)
rl.close()    