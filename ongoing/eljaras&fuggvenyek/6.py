import random

# beepitett metszet funkcio
def metszet(a, b):
    l = set(a).intersection(b)
    return len(l)

# sajat metszet
def metszetalg(a, b):
    l = []
    for szam in a:
        if szam in b and szam not in l:
            l.append(szam)
    return len(l)

lista = []
lista2 = []
for x in range(10):
    lista.append(random.randint(0, 5))
    lista2.append(random.randint(0, 5))

# print(lista, lista2, metszet(lista, lista2), sep="\n")
print(lista, lista2, metszetalg(lista, lista2), sep="\n")