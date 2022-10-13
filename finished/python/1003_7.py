import random
lista = []
for x in range(30): lista.append(random.randint(1, 100))
# print(lista)
lista.sort()
print(f'lista legnagyobb elemenek erteke {lista[-1]}')