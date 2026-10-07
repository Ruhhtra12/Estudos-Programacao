n = int(input("Quantas linhas tera a matriz?"))
m = int(input("Quantas colunas tera a matriz?"))
mat: list[list[int]] = [[0 for x in range(m)] for x in range(n)]

for y in range(0,n):
    for x in range(0,m):
        value = int(input(f"Valor no ponto [{y}][{x}] = "))
        mat[y][x] = value
print("Operação terminada!")
print("Matriz descrita:")
for valores in mat:
    print(valores)