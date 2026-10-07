Algoritmo "Sequencia_impares"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 3/27/2026
Var
 x,i,soma : inteiro

Inicio
      escreval("DIgite o número em que quer ver a sequência de impares: ")
      leia(x)
      para i de 1 ate x faca
           se(i % 2 = 1) entao
                escreval(i:2:0)
                soma <- soma + i
                fimse
      fimpara
      escreval("O valor final foi: ", soma:2:0)

Fimalgoritmo