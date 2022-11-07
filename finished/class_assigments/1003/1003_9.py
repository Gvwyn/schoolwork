lista = ['Jean', 'Maximilien', 'Brigitte', 'Sonia', 'Jean-Pierre', 'Sandra']
rovidnev = [] # <6
hosszunev = [] # >6

for x in range(len(lista)):
    if len(lista[x]) <= 6:
        rovidnev.append(lista[x])
    else:
        hosszunev.append(lista[x])

print(f'<6 {rovidnev}\n>6 {hosszunev}')
