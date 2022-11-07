import random
lista = []
nszamok = []
for x in range(20): lista.append(random.randint(0, 20))

n = random.randint(1, 5)
nszamok.append(lista[:n])
nszamok.append(lista[-n:])

print(f'{lista}, {n} -> {nszamok}')