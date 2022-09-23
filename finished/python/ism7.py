# teljes x, 1 while
meret = 5
kozep = 3
karakterek = 0
karakterekjobb = 5
sorszam = 0

while sorszam < meret:
    sorszam = sorszam + 1

    if sorszam <= kozep:
        karakterek = karakterek + 1
        karakterekjobb = karakterekjobb - 1

    elif sorszam > kozep:
        karakterek = karakterek - 1
        karakterekjobb = karakterekjobb + 1
    
    print('.'*(karakterek-1), end='')
    print('x', end='')

    if sorszam !=  kozep:
        print('.'*(karakterekjobb-karakterek), end='')
        print('x', end='')
    print('.'*(karakterek-1), end='')
    print('')
