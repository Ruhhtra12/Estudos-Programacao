Algoritmo "ParImpar"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 3/27/2026
Var
   x, i, num : inteiro


Inicio
      Escreval("Digite a quantidade de valores que deseja consultar: ")
      Leia(x)
      para i de 1 ate x faca
           escreval("Digite o numero: ")
           leia(num)

           se(num <> 0) entao
              se(num % 2 = 0) entao
                     escreva("Par ")
              senao
                   escreva(" Impar")
              fimse
              se(num > 0) entao
                     escreva(" Positivo")
              senao
                   escreva(" Negativo")
              fimse
           senao
                Escreval(" Nulo ")
           fimse
           fimpara

Fimalgoritmo