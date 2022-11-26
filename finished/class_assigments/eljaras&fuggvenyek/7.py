import random

def kulonbseg(a, b):
    ertek = 0
    for x in a:
        for y in b:
            if x not in b and x not in l:
                ertek += 1
            if y not in a and y not in l:
                ertek += 1
    return ertek

lista = []
lista2 = []
for x in range(3):
    lista.append(random.randint(0, 10))
    lista2.append(random.randint(0, 10))

print(lista, lista2, kulonbseg(lista, lista2), sep="\n")
