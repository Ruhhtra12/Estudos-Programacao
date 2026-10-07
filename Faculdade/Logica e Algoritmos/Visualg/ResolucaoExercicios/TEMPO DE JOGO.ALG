Algoritmo "Tempo de jogo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2/20/2026
Var
   TempoInicial, TempoFinal, Duracao : inteiro


Inicio

      Escreval("Digite o horario inicial do jogo: ")
      leia(TempoInicial)
      Escreval("Digite o horario final do jogo: ")
      leia(TempoFinal)
              se (tempoFinal > TempoInicial) entao
                   Duracao <- TempoFinal - TempoInicial
              senao
                   Duracao <- (24 - TempoInicial) + TempoFinal
                   
                   fimse
                Escreval("A duração do jogo foi de  : ", Duracao:2:2," Horas.")
Fimalgoritmo