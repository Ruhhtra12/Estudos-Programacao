Algoritmo "Vetor"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 3/27/2026
Var
   Vector: vetor [0 .. 100] de inteiro
   num, i, x : Inteiro


Inicio
      escreval("Digite a quantidade de valores: ")
      leia(num)
      para i de 0 ate num  faca
           escreval("Digite os valores: ")
           leia(x)
           Vector[i] <- x
      fimpara
      para i de 0 ate num faca
      escreval(Vector[i])
      fimpara
Fimalgoritmo