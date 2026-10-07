Algoritmo "Matrizes"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 3/27/2026
Var
   x, i,l,j: inteiro
   teste: vetor [0..4,0..4] de inteiro


Inicio
      x <-0
   para j de 0 ate 4 faca
        para l de 0 ate 4 faca
             teste[j,l]<- 1
        fimpara
   fimpara
   para j de 0 ate 4 faca
        para l de 0 ate 4 faca
             x <- x + teste[j,l]
        fimpara
   fimpara
   escreval(x)



Fimalgoritmo