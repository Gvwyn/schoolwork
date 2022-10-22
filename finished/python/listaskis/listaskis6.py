import random
lista = []
for x in range(20): lista.append(random.randint(0, 100))
# print(lista)

megoldas = False
for x in range(len(lista)-2):
    if lista[x] == lista[x+1] == lista[x+2]:
        print('van')
        megoldas = True
        break

if megoldas == False:
    print('nincs')


