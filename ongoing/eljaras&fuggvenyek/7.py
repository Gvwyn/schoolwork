import random

def kulonbsegekszama(a, b):
    l = []
    for x in a:
        for y in b:
            if x not in b and x not in l:
                l.append(x)
            if y not in a and y not in l:
                l.append(y)
    return len(l)

lista = []
lista2 = []
for x in range(3):
    lista.append(random.randint(0, 5))
    lista2.append(random.randint(0, 5))

print(lista, lista2, kulonbsegekszama(lista, lista2), sep="\n")
