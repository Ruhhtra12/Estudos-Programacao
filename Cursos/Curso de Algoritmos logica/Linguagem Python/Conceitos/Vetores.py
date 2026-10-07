ListofNumbers = []
num = int(input("Quantos números irá digitar?"))
x = 0
i = 0
for x in range(num):
    value = input("Digite alguma coisa meu fi")
    ListofNumbers.append(value)
for x in range(num):
    i = i + 1
    print(f"Valor {i} : {ListofNumbers[x]} \n")