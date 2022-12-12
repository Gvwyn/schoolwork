with open("files/nevek.txt", "r", encoding="utf-8") as beolvfajl:
    fajl = [line.strip().split(" ") for sor in beolvfajl] # huh

legh_veznev = "" # 1.
ketvz = [] # 2.
egesz_nev = ""
legh_nev = "" # 3.
legt_a = "" # 4.
veznevism = False # 5.

for x in range(len(fajl)):
    # 1.
    if len(fajl[x][-1]) > len(legh_veznev):
        legh_veznev = fajl[x][-1]
    
    # 2.
    if len(fajl[x]) == 3:
        ketvz.append(fajl[x])
    
    # yo
    for szo in fajl[x]:
        egesz_nev += " " + szo
    # 3.
    if len(egesz_nev) > len(legh_nev):
        legh_nev = egesz_nev
    # 4.
    if egesz_nev.count("a") > legt_a.count("a"):
        legt_a = egesz_nev
    egesz_nev = ""

    # 5.
    jel_veznev = fajl[x][-1]
    if sum(nev.count(jel_veznev) for nev in fajl):
        veznevism = True

print(f"1. {legh_veznev}\n2. {ketvz}\n3.{legh_nev}\n4.{legt_a}\n5. {veznevism}")