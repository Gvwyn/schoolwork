import random

szam = random.randint(10, 150)
osztok = []
print(f'a random szam {szam}')

# osztok
for x in range(szam):
	if x == 0: continue
	elif szam % x == 0:
		osztok.append(x)

print(osztok)
if sum(osztok) > szam:
	print('bovelkedo')

elif sum(osztok) == szam:
	print('tokeletes')

else:
	print('hianyos')