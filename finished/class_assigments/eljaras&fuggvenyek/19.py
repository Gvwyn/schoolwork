def megoldas(a):
    for i in range(1, a+1):
        if i % 3 == 0:
            print("-", end="")
        else:
            print("+", end="")

szam = int(input("szam: "))
megoldas(szam)