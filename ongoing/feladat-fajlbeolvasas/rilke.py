with open("files/rilke.txt", encoding="utf-8") as beolvfajl:
    fajl = beolvfajl.read()

print(len(fajl) - fajl.count(" "))

mgs = ["a", "á", "e", "é", "i", "í", "o", "ó", "ö", "ő", "u", "ú", "ü", "ű"]
maganhangzok = 0
for betu in mgs:
    maganhangzok += fajl.count(betu)
    # print(betu, fajl.count(betu), end=", ")
print(maganhangzok)

print(len(fajl.split()))
