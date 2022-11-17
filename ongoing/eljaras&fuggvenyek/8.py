import random

def lista_atlag(a):
    ertek = 0
    for szam in a:
        ertek += szam
    return ertek/len(a)

    
lista = []
for x in range(10): lista.append(random.randint(0, 10))
print(lista, lista_atlag(lista), sep="\n")
