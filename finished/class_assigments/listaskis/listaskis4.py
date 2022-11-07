import random
lista = []
for x in range(10): lista.append(random.randint(0, 100))

megoldas = 0
for x in range(len(lista)-1):
    if lista[x] < lista[x+1]:
        megoldas += 1

# print(lista)
print(megoldas)