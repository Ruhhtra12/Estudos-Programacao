Algoritmo "VetorPessoas"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 3/27/2026
Var
   Altura: vetor [0 .. 5] de real
   Peso: vetor[0..5] de real
   Idade: vetor[0.. 5] de Real
   Nome: vetor[0..5] de caractere
   num, x,menor : Real
   T : inteiro


Inicio
      escreval("Digite a quantidade de valores: ")
      leia(num)
      para T de 0 ate (num-1) faca
           escreval("Digite os dados da ",T,"° Pessoa: ")
           escreval("Nome: ")
           leia(Nome[T])
           escreval("Idade: ")
           leia(Idade[T])
           escreval("Peso: ")
           leia(Peso[T])
           escreval("Altura: ")
           leia(Altura[T])
      fimpara


      para T de 0 ate num-1 faca

       x <- x + altura[T]
       se(idade[T] < 16) entao
       menor <-Menor + 1

      fimpara
      

      escreval("Média de altura: ", (x/num):2:1)
      escreval("Pessoas com idade menor que 16 anos: ", (num*menor/100))
      para i de 0 ate num faca
           se(idade[T] < 16) faca
                       escreval(nome[T])
           fimse
      fimpara

Fimalgoritmo