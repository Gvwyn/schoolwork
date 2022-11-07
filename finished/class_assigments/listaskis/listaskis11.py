import random
lista = []
x = 0
while len(lista) != 10:
    x = random.randint(-30, 100)
    if x % 2 != 0:
        lista.append(x)
    else:
        continue

print(lista)