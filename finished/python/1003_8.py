import random
lista = []
paratlan = []
paros = []
for x in range(30): lista.append(random.randint(1, 100))
# print(lista)

for x in range(len(lista)):
    if lista[x] % 2 == 0:
        paros.append(lista[x])
    else:
        paratlan.append(lista[x])

print(f'paros {paros}\nparatlan {paratlan}')
