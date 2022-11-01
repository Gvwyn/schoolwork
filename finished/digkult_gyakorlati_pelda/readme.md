**Számoló (15 pont)**  
Készítsen összeadás, kivonás és szorzás gyakorlására szolgáló programot az alábbi leírás
szerint szamolo neven! A megoldás során használja a valasz, a, b, c, d, ok és db nevű, egész
típusú változókat.  
1. Írja ki a képernyőre a választási lehetőségeket az alábbiak szerint:  
```
Milyen műveletet szeretne gyakorolni?
    1. Összeadás
    2. Kivonás
    3. Szorzás
```
2. Olvassa be a választ és tárolja a valasz nevű változóba! (Ha a beolvasást nem tudja
megvalósítani, akkor állítsa a változó értékét 3-ra a program kódjában.)
```
Választás (1-3): 1
```
3. Állítsa a db és ok nevű változók kezdőértékét nullára. Ezekben a változókban számlálja
majd a próbálkozások, illetve helyes válaszok számát.

4. Készítsen feltételes ciklust, ami addig fut, amíg a helyes válaszok száma nem éri el az
ötöt.

5. A cikluson belül a következő utasításokat hajtsa végre:

    1. Növelje meg a db változó értékét.
    2. Generáljon két 1 és 10 közötti véletlen egész számot és tárolja el őket az a és b
nevű változókba!  
(Ha a véletlenszám-generálást nem tudja megvalósítani, akkor az a változó értéke
legyen az ok változó értékének kétszeresére plusz egy, a b változóba pedig tárolja
el a db változó tízes osztási maradékánál eggyel nagyobb számot!)

    3. Készítsen háromágú elágazást a választott művelet sorszáma szerint.

    4. Az elágazás mindhárom ágában írja ki a képernyőre az elvégzendő műveletet a
két generált számmal.

    5. Az elágazás mindhárom ágában végezze el a generált számokkal a kijelölt
műveletet, s az eredményt mentse a d nevű változóba!

    6. Olvassa be a felhasználó megoldását a c nevű változóba.

    7. Készítsen elágazást aszerint, hogy a beolvasott c érték egyenlő-e a helyes
megoldást tároló d értékkel.

    8. Egyenlőség esetén növelje meg az ok számláló értékét eggyel és írja ki a
„Helyes!” feliratot; egyéb esetben írja ki a „Hibás!” feliratot.
```
7*4 = 28
 Helyes! 
```

6. A ciklus után írjon ki egy gratuláló szöveget, melyben visszajelzi, hogy hány
próbálkozásból sikerült az öt helyes választ megadni.
```
Gratulálunk!
Sikerült 5 helyes műveletet elvégezni 8 próbálkozásból
```