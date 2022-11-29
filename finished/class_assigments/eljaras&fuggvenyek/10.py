def megoldas(a, b):
    if a >= b: return a
    elif a < b: return b

szam = int(input("a: "))
szam2 = int(input("b: "))
print( megoldas(szam, szam2) )
