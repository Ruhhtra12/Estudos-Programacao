Algoritmo "Aumento de salário"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2/20/2026
Var
 SalarioAntigo, SalarioNovo, Percentual : real


Inicio

      Escreval("Digite seu salário atual: ")
      leia(SalarioAntigo)
      Escreval("Digite o percentual de aumento em %: ")
      leia(Percentual)
      SalarioNovo <- (SalarioAntigo + ((SalarioAntigo * Percentual)/100))
      Escreval("O novo salario é de: ", SalarioNovo:5:2)
      

Fimalgoritmo