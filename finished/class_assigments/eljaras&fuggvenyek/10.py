def megoldas(a, b):
    if a == b:
        return a
    elif a > b:
        return a
    elif a < b:
        return b

szam = int(input("szam (a): "))
szam2 = int(input("szam (b): "))
print(megoldas(szam, szam2))
