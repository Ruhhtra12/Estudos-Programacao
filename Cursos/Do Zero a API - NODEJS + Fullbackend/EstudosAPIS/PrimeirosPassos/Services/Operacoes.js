function Somar(Num1,Num2) {
     const soma = Number(Num1) + Number(Num2)
     return soma
}
function Subtrair(Num1,Num2) {
     const soma = Number(Num1) -     Number(Num2)
     return soma
}
function Multiplicar(Num1,Num2) {
     const soma = Number(Num1) * Number(Num2)
     return soma
}
function Dividir(Num1,Num2) {
     if(Num2 == 0){
          throw new Error("não se pode dividir por 0")
     }
     const soma = Number(Num1) / Number(Num2)
     return soma
}

module.exports = {
    Somar,
    Subtrair,
    Multiplicar,
    Dividir
}