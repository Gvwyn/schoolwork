import random
# jelentosege nincs, csak kell egy lista amivel dolgozik
lista = []
for x in range(50):
    lista.append(random.randint(0, 50))
# lista keszites end

lista_masolt = []
for x in range(len(lista)):
    try:
        lista_masolt.index(lista[x])
    except ValueError:
        lista_masolt.append(lista[x])

# lista_masolt.sort()
print(lista_masolt)