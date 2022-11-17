def megoldas(a, b):
    if sum(a) >= sum(b):
        return sum(a)
    elif sum(b) > sum(a):
        return sum(b)

tomb1 = []
tomb2 = []
for i in range(3):
    tomb1.append(int(input(f"TOMB-1, {i+1}. szam: ")))
    tomb2.append(int(input(f"TOMB-2, {i+1}. szam: ")))

print(megoldas(tomb1, tomb2))