# barmelyik paratlan szammal mukodik
meret = 5
kozep = 3
karakterek = 0
sorszam = 0
oszlopszam = 0

while sorszam < meret:
	sorszam = sorszam + 1

	if sorszam <= kozep:
		karakterek = karakterek + 1
	elif sorszam > kozep:
		karakterek = karakterek - 1

	while oszlopszam < karakterek:
		print('x', end='')
		oszlopszam = oszlopszam + 1
	
	oszlopszam = 0
	print('.'*(meret-karakterek), end='')
	print('')
