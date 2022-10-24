# alternativ megoldas, igy viszont nem fogok egybeagyazni
meret = 5
kozep = 3
karakterek = 0
sorszam = 0

while sorszam < meret:
	sorszam = sorszam + 1

	if sorszam <= kozep:
		karakterek = karakterek + 1
	elif sorszam > kozep:
		karakterek = karakterek - 1

	print('.'*(karakterek-1), end='')
	print('x', end='')

	print('.'*(meret-karakterek), end='')
	print('')
