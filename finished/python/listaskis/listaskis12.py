import random
nyeroszamok = []
while len(nyeroszamok) != 5:
    w = random.randint(1, 90)
    if w not in nyeroszamok:
        nyeroszamok.append(w)

print(nyeroszamok)