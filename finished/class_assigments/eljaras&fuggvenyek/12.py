import random

def megoldas(a):
    legh_szakasz = 0
    j_szakasz = [a[0]]
    for x in range(0, len(a)-1):
        if a[x] == a[x+1]:
            j_szakasz.append(a[x])
        else:
            if legh_szakasz < len(j_szakasz):
                legh_szakasz = len(j_szakasz)
                # print(j_szakasz, end="\n")
            j_szakasz.clear()
            j_szakasz.append(a[x+1])

    return legh_szakasz

lista = []
for x in range(50): lista.append(random.randint(0, 1))

print(lista, megoldas(lista), sep="\n")
