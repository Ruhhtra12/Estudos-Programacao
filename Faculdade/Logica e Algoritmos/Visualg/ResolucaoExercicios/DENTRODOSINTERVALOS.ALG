Algoritmo "DentroDosIntervalos"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 3/27/2026
Var
 x,i,dentro, fora,n : inteiro

Inicio
      escreval("Digite a quantidade de números: ")
      leia(x)
      para i de 1 ate x faca
           escreval("Digite um número: ")
           leia(n)
           se(n > 10) e (n < 20) entao
                dentro  <- dentro + 1
                senao
                     fora <- fora + 1
           fimse
      fimpara
      
      escreval("Dentro:  ", dentro:2:0)
      escreval("Fora:  ", fora:2:0)
Fimalgoritmo