import random
lista = []
lista_novekvoben = []
for x in range(5): lista.append(random.randint(0, 1000))
for x in range(5): lista_novekvoben.append(lista[x])

lista.sort()

if lista == lista_novekvoben:
    print(f'novekvoben van\n{lista_novekvoben}\n{lista}')
else:
    print('nincs novekvoben')





