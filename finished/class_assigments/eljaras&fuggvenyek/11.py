import random
def megoldas(a, b):
    if sum(a) >= sum(b):
        return sum(a)
    elif sum(b) > sum(a):
        return sum(b)

lista = []
lista2 = []
for i in range(3):
    lista.append(random.randint(0, 5))
    lista2.append(random.randint(0, 5))

print(megoldas(lista, lista2))