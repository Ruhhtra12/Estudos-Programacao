NomePessoas = []
IdadePessoas = []
while True:
    x = str(input("Qual o nome da pessoa?(0 - para fechar)"))
    if x == "0" : break
    I = int(input("Qual a idade da pessoa?"))
    NomePessoas.append(x.strip())
    IdadePessoas.append(I)
media = (sum(IdadePessoas)) / (len(IdadePessoas))

for Item1, item2 in zip(NomePessoas,IdadePessoas):
    print(f"{Item1} - Idade {item2}")
print(f"Media total {media}")