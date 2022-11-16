import random

def metszetlen(a, b):
    l = set(a).intersection(b)
    return len(l)

lista = []
lista2 = []
for x in range(10):
    lista.append(random.randint(0, 5))
    lista2.append(random.randint(0, 5))

print(lista, lista2, metszetlen(lista, lista2), sep="\n")


