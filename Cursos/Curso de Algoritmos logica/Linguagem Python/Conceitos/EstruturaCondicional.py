Horas = int(input("Quantas horas são agora?"))
if (Horas > 5) and (Horas < 12):
    print("Bom dia!")
elif (Horas > 12) and (Horas < 19):
    print("Boa tarde!")
elif ((Horas > 18) and (Horas < 24)) or (Horas < 5):
    print("Boa noite!")
else:
    print("Hora invalida!")