Algoritmo "Baskara"

Var
A, B, C , x1, x2, Delta : Real


Inicio
      escreval("Digite o valor do coeficiente A: ")
      leia(A)
      escreval("Digite o valor do coeficiente B: ")
      leia(B)
      escreval("Digite o valor do coeficiente C: ")
      leia(C)

      Delta <- Exp((B),2) - 4 * A * C
            se ( Delta < 0) entao
               escreval("Valor impossivel para a função!")
            senao
                 x1 <-  ((-B + raizQ(Delta))/(2 * A))
                 x2 <-  ((-B - raizQ(Delta))/(2 * A))
                 escreval("O valor de X! é: ", x1:5:5)
                 escreval("O valor de x2 é: ", x2:5:5)
            Fimse
Fimalgoritmo