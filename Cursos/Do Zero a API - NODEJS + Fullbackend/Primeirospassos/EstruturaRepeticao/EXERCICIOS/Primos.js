import { stdin as input ,stdout as output} from "node:process";
import * as Readline from "node:readline/promises";

const Rl = Readline.createInterface({input,output})

let Valor = await Rl.question("Até qual valor quer encontrar os números primos? ")
Rl.close()
for(let i = 1;  i <= Valor; i ++){

    let IsPrimo = true
    for(let j = 2; j < i; j++){
        if(i % j == 0 ){
            IsPrimo = false
            break;
        }
    }
    if(IsPrimo == true){
        console.log(`PRIMO[${i}]`)
    }
}