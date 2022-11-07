import random
lista = []
for x in range(10): lista.append(random.randint(0, 100))

megoldas = False
for x in range(len(lista)-1):
    if lista[x+1] == lista[x]*2:
        print('van')
        megoldas = True
        break

if megoldas == False:
    print('nincs')