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
     const soma = Number(Num1) / Number(Num2)
     return soma
}

module.exports = {
    Somar,
    Subtrair,
    Multiplicar,
    Dividir
}