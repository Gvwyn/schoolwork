psec = 0.00
pp = 0
ksec = 0.00
kp = 0

# nincs jobb otletem fml
pidok = [0.00, 0.00, 0.00]
pfekvok = [0, 0, 0]

kidok = [0.00, 0.00, 0.00]
kfekvok = [0, 0, 0]

# ideiglenes szamok mert
i = 0.00
k = 0

# piros
print('piros csapat')
for x in range(3):
	i = float(input(f'{x+1}. gyerek ideje [0.00 formatum]: '))
	k = int(input(f'{x+1}. gyerek fekvotamaszainak szama: '))
	pidok[x] = i
	pfekvok[x] = k
	psec = psec + i
	pp = pp + k
	
	if pp > 120:
		print('gyakorlat befejezve, 120 elerve')
		break

# e kek
print('kek csapat')
for x in range(3):
	i = float(input(f'{x+1}. gyerek ideje [0.00 formatum]: '))
	k = int(input(f'{x+1}. gyerek fekvotamaszainak szama: '))
	kidok[x] = i
	kfekvok[x] = k
	ksec = ksec + i
	kp = kp + k

	if kp > 120:
		print('gyakorlat befejezve, 120 elerve')
		break

print('csapateredmenyek')
for x in range(3):
	print(f'PIROS {x+1}. {pidok[x]}s {pfekvok[x]}')

for x in range(3):
	print(f'KEK {x+1}. {kidok[x]}s {kfekvok[x]}')
szeri