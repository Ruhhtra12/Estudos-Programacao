Algoritmo "Tresnum"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2/9/2026
Var
   A, B, C, Menor : real


Inicio
      escreval("Numero um: ")
      leia(A)
      escreval("Numero dois: ")
      leia(B)
      escreval("Numero tres:")
      leia(C)
             se (A < B) e (A < C)   Entao
                Menor <- A
             senao
                  se (B < A) e (b < C) entao
                  Menor <- B
                  senao
                       Menor <- C
                  fimse
             fimse
      escreval("O menor número é: ", Menor)
Fimalgoritmo