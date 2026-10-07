import math
Base = float(input("Digite a Base do seu retângulo!"))
altura = float(input("Digite a altura do seu retângulo!"))
def Area(Base, altura) : 
    Area = Base * altura
    return Area
def Diagonal(Base,altura):
    Diagonal = math.sqrt(( Base ** 2) + (altura ** 2))
    return Diagonal
def perimetro(Base,altura):
    perimetro = (2 * Base) + (2* altura)
    return perimetro
print(f"Area: {Area(Base,altura)}")
print(f"Diagonal: {Diagonal(Base,altura)}")
print(f"perimetro: {perimetro(Base,altura)}")