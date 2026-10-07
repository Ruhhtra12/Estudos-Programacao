x = float(input("Digite algum número: "))
y = float(input("Digite outro número: "))

if( y < x):
    troca = x
    x = y
    y = troca


def SomarImpares(Val1,Val2):
    soma = 0
    for i in range(int(Val1),int(Val2)):
        if i % 2 != 0:
            soma += i
    return soma
print(f"Distancia dos valores : {abs(x - y)}")
print(f"Soma dos impares nesse periódo: {SomarImpares(x,y)}")
