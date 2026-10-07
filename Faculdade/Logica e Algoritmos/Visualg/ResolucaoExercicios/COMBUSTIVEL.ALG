Algoritmo "Combustivel"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 3/16/2026
Var
COdigo, Gas, alcool, diesel : Inteiro


Inicio
      Escreval("Digite o codigo[1,2,3}, 4 para parar a execução")
      leia(COdigo)
      Enquanto (Codigo <> 4)faca
      escolha codigo
      caso 1
           gas <- gas + 1
           Escreval("Digite o codigo[1,2,3}, 4 para parar a execução")
      leia(COdigo)
      caso 2
           alcool <- alcool +1
           Escreval("Digite o codigo[1,2,3}, 4 para parar a execução")
      leia(COdigo)
      caso 3
           diesel <- diesel +1
           Escreval("Digite o codigo[1,2,3}, 4 para parar a execução")
      leia(COdigo)
      outrocaso
               escreval("Codigo inexistente, tente novamente!")
               leia(Codigo)
             fimescolha
                         fimenquanto
      se(codigo = 4) entao
                   escreval("Fim de execução do programa")
                   escreval("COmbustiveis utilizados: ")
                   escreval("Gasolina : " ,Gas:2:0)
                   escreval("Alcool : ", alcool:2:0)
                   escreval("Diesel : ", diesel:2:0)
Fimalgoritmo
Fimse