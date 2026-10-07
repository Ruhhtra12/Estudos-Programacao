Algoritmo "VetorValorNegativo"
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
      para i de 0 ate num-1  faca
           escreval("Digite os valores: ")
           leia(Vector[i])
      fimpara
      escreval("Valores negativos: ")
      para i de 0 ate num-1 faca
           escreval(Vector[i])
       x <- x + Vector[i]
      fimpara
      escreval("Soma: ",x:2:0)
      escreval("Média: ", (x/num):2:1)

Fimalgoritmo