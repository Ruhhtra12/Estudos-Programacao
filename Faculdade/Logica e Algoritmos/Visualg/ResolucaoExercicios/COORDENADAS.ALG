Algoritmo "Coordenadas"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2/20/2026
Var
 x, y : real
 posicao : caractere


Inicio
      Escreval("Digite o valor de X do ponto: ")
      leia(x)
      escreval("Digite o valor de Y do ponto: ")
      leia(y)
      se (x = 0) e (y = 0)entao
         Posicao <- "Centro"
         senao
            se (x = 0) entao
                 posicao <- "Eixo x"
            senao
                 se (y = 0)    entao
                  posicao <- "Eixo Y"
                  senao
                       se ( x >0 ) e ( y > 0) entao
                          Posicao <- "Quadrante 1"
                          fimse
                        se ( x >0 ) e ( y < 0) entao
                          Posicao <- "Quadrante 4"
                          fimse
                        se ( x <0 ) e ( y > 0) entao
                          Posicao <- "Quadrante 2"
                          fimse
                        se ( x <0 ) e ( y < 0) entao
                          Posicao <- "Quadrante 3"
                          fimse
                  fimse
            fimse
      fimse
      escreval("A posião do ponto se encontra no: ",Posicao)

Fimalgoritmo