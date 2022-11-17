import random

def megoldas(a, b):
    eredmeny = []
    limit = b-a+1
    helyes_ertek = False
    for _ in range(limit):
        helyes_ertek = False
        while not helyes_ertek:
            x = random.randint(a, b)
            if x not in eredmeny:
                eredmeny.append(x)
                helyes_ertek = True
    return eredmeny

kezdo = int(input("kezdo ertek: "))
veg = int(input("vegertek: "))
print(megoldas(kezdo, veg))