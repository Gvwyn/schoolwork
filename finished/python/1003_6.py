"""
Írjon egy programot, ami kiíratja egy csütörtöki nappal kezdődő képzeletbeli év
napjainak a listáját. A scriptben három lista lesz : az egyik a hét napjainak a
neveit fogja tartalmazni, a másik a hónapok neveit, a harmadik pedig hogy hány
naposak a hónapok (a szökőéveket nem vesszük figyelembe).
"""

het_napjai = ['hetfo', 'kedd', 'szerda', 'csutortok', 'pentek', 'szombat', 'vasarnap']
honapok = ['januar', 'februar', 'marcius', 'aprilis', 'majus', 'junius', 'julius', 'augusztus',
    'szeptember', 'oktober', 'november', 'december']
honapok_hossza = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
# honapok_hossza[2] = 29

het_napja = 3
for honap in range(12):
    for nap in range(honapok_hossza[honap]):
        if het_napja == 7:
            het_napja = 0
        print(f'{het_napjai[het_napja]}, {honapok[honap]} {nap+1}')
        het_napja += 1
    