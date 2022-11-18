def megoldas(a, b):
    ertek = 0
    for i in range(a, b+1):
        ertek += i
    
    return ertek

szam = int(input("szam: "))
szam2 = int(input("szam 2: "))

print(megoldas(szam, szam2))
