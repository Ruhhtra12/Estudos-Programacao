Algoritmo "Lanchonete"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2/13/2026
Var
 ValorTotal : real
 Procedimento Itens()
 var
    input,quantidade : inteiro
    decisao : caractere
inicio
      repita
      escreval("Digite o codigo do produto: ")
       leia(input)
      escreval("Digite a quantidade comprada: ")
       leia(quantidade)

      escolha input
         caso 1
              ValorTotal <- ValorTotal + quantidade * 5.0
         caso 2
              ValorTotal <- ValorTotal + quantidade * 3.5
         caso 3
              ValorTotal <- ValorTotal + quantidade * 4.8
         caso 4
              ValorTotal <- ValorTotal + quantidade * 8.90
         caso 5
              ValorTotal <- ValorTotal + quantidade * 7.3
         outrocaso
                  escreval("Codigo de produto invalido")
      fimescolha
      escreval("Tem mais produtos? (s/n) ")
       leia(decisao)
       ate decisao  = "n"
       Escreval("Valor total: R$" ,ValorTotal:3:2)

fimprocedimento



Inicio
      ValorTotal <- 0
      Itens()



Fimalgoritmo