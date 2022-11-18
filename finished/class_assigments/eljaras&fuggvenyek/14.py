def megoldas(n, m):
    for _ in range(m):
        for _ in range(n):
            print("*", end="")
        print()

oszlop = int(input("n: "))
sor = int(input("m: "))

megoldas(oszlop, sor)