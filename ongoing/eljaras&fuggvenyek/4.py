def primszame(a):
    for x in range(2, a):
        if a%x == 0:
            return False
    return True

szam = int(input("szam: "))
print(primszame(szam))