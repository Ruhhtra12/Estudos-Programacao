import { stdin, stdout } from "node:process";
import * as readline from "node:readline/promises";

const rl = readline.createInterface(stdin, stdout)
let resposta = await rl.question("Fibonnaci até qual valor? ")
rl.close()

let UltimoValor = 1, PenultimoValor = 0, auxiliar

for(let i = 0; i<= resposta;i++)
{
    auxiliar = UltimoValor + PenultimoValor
    console.log(`[${PenultimoValor}] + [${UltimoValor}] = [${auxiliar}]`)
    PenultimoValor = UltimoValor
    UltimoValor = auxiliar
}