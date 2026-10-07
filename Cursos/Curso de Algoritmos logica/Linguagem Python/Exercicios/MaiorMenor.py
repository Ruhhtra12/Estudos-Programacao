NumList = []
while True:
    n= int(input("Digite o numero [0 para fechar]"))
    if n == 0:
        break
    NumList.append(n)
Maior = 0
Menor = 9999999999
for valores in NumList:
    if valores > Maior:
        Maior = valores
    elif valores < Menor:
        Menor = valores
print(f"Valores = {NumList}")
print(f"Menor = {Menor} - foi o {NumList.index(Menor)}° valor")
print(f"Maior = {Maior} - foi o {NumList.index(Maior)}° valor")

