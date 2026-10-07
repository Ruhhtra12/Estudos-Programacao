Algoritmo "Conversão de temperatura"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2/9/2026
Var
 Temperatura, Celsius, Kelvin ,Fahrenheit :real
 Escala : caractere

Inicio
      Escreval("Qual a escala utilizada? (F/C/K)")
      leia(Escala)
      escreval("Qual a temperatura obtida?")
      leia(Temperatura)
      se (Escala = "F") ou (Escala ="f") entao
         Fahrenheit <- Temperatura
         Celsius <- (Temperatura - 32) * 5 / 9
         Kelvin  <- ((Temperatura - 32) * 5 / 9) + 273.15
         escreval("A temperatura em fahrenheit é :", Fahrenheit)
         escreval("A temperatura em Celsius é :",Celsius)
         escreval("A temperatura em Kelvin é :",Kelvin)
      senao
           se (Escala = "c") ou (Escala ="C") entao
            Celsius <- Temperatura
            Kelvin  <- Celsius + 273.15
            Fahrenheit <- 9 * Celsius /5 + 32
            escreval("A temperatura em Celsius é :",Celsius)
            escreval("A temperatura em Kelvin é :",Kelvin)
            escreval("A temperatura em Farenheit é :",Fahrenheit )
            fimse
           se (Escala = "K") ou (Escala ="K") entao
            Kelvin <- temperatura
            Celsius <- Kelvin - 273.15
            Fahrenheit <- 9 * Celsius /5 + 32
            escreval("A temperatura em Celsius é :",Celsius)
            escreval("A temperatura em Kelvin é :",Kelvin)
            escreval("A temperatura em Farenheit é :",Fahrenheit )
            fimse
      fimse

Fimalgoritmo