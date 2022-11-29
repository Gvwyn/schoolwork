def megoldas(a, b, c):
    if a >= 0 and b >= 0 and c >= 0:
        return True
    return False

szam = int(input("elso szam: "))
szam2 = int(input("masodik szam: "))
szam3 = int(input("harmadik szam: "))

print(megoldas(szam, szam2, szam3))