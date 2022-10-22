import random
a = 0
b = 0
c = 0
d = 0
ok = 0
db = 0

print(f'Milyen muveletet szeretne gyakorolni?\n\t1. Osszeadas\n\t2. Kivonas\n\t3. Szorzas')
valasz = int(input('Valasztas (1-3): '))

while ok != 5:
    db += 1
    a = random.randint(1, 10)
    b = random.randint(1, 10)

    if valasz == 1:
        d = a+b
        c = int(input(f'{a}+{b} = '))
        if c == d:
            ok += 1
            print('Helyes!')

        else:
            print('Hibas!')

    elif valasz == 2:
        d = a-b
        c = int(input(f'{a}-{b} = '))
        if c == d:
            ok += 1
            print('Helyes!')
        else:
            print('Hibas!')

    elif valasz == 3:
        d = a*b
        c = int(input(f'{a}*{b} = '))
        if c == d:
            ok += 1
            print('Helyes!')
        else:
            print('Hibas!')

print(f'Gratulalunk!\nSikerult 5 helyes muveletet elvegezni {db} probalkozasbol.')