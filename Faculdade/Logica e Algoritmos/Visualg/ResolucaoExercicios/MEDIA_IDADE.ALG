Algoritmo "Media_idade"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2/23/2026
Var
 Somaidades,x, Cont, Media: Real
 Qntd : inteiro

Inicio
      EscrevaL("Quantos números quer a média?")
      leia(Qntd)
      Escreval("Digite o primeira idade")
      leia(x)
      somaidades <- x
      cont <- 1
      enquanto cont < Qntd faca
               Escreval("Digite outra idade")
               leia(x)
               se( x > 0 )entao
               somaidades <- (somaidades + x)
               cont <- Cont + 1
               fimse
      fimenquanto
                 Media <- (Somaidades/Cont)
      Escreval("A soma de idades é: ", somaidades)
      Escreval("A media das idades é: ", Media:3:1)

Fimalgoritmo