import random
def gyakorisag(a, k):
    return a.count(k)

lista = []
for x in range(20): lista.append(random.randint(0, 5))

szam = int(input("szam (gyakorisaga a listaban): "))
print(gyakorisag(lista, szam))

