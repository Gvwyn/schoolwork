def megoldas(a):
    if a % 2 == 0 and a % 3 == 0:
        return True
    return False

szam = int(input("szam: "))

print(megoldas(szam))