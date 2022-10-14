utasitas = input('Kerem a robot parancsait: ')
e = 0
d = 0
k = 0
n = 0

x = 0
y = 0

for betu in utasitas:
    if betu == 'E':
        e += 1
        y += 1
    if betu == 'D':
        d += 1
        y -= 1
    if betu == 'K':
        k += 1
        x += 1
    if betu == 'N':
        n += 1
        x -= 1

print(f'E betuk szama: {e}\nD betuk szama: {d}\nK betuk szama {k}\nN betuk szama: {n}\nX {x}, Y {y}')

if x >= 0:
    print(x*'K', end='')
elif x < 0:
    print(-x*'N', end='')

if y >= 0:
    print(y*'E')
elif x < 0:
    print(-y*'D')