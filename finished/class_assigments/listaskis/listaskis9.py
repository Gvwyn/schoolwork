import random
lista = []
for x in range(10): lista.append(random.randint(0, 20))

megoldas = False
for x in range(1, len(lista)-1):
    if lista[x] == lista[x-1] + lista[x+1]:
        print(f'{lista[x]} ({lista[x-1]}, {lista[x+1]})')
        megoldas = True
    else:
        continue

if megoldas == False: print('nincs ilyen a listaban')

