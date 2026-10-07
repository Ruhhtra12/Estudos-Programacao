Algoritmo "Impares"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2/26/2026
Var
n1, n2, i, Sum : inteiro


Inicio
escreva("Digite o numero 1: ")
leia(N1)
escreva("DIgite o número 2: ")
leia(N2)
        sum <- 0
        se N1 < N2 entao
       para i de N1+1 ate N2-1 faça
            se (i % 2 <> 0) entao
              Sum <- Sum + i
              fimse

       fimpara
              senao
               para i de N2+1 ate N1-1q faça
            se (i % 2 <> 0) entao
              Sum <- Sum + i
              fimse
              fimpara
       fimse
       escreval("A soma total dos valores impares é: ", Sum)


Fimalgoritmo