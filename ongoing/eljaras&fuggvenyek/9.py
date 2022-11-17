import random

def megoldas(a):
    ertek = 0
    for szam in a:
        if szam % 3 == 0 and szam % 5 != 0:
            ertek += 1
    return ertek

lista = []
for x in range(10): lista.append(random.randint(0, 10))
print(lista, megoldas(lista), sep="\n")
