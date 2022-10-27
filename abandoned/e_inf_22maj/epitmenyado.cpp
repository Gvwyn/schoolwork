#include <bits/stdc++.h>
#include <algorithm>
int a_adosav, b_adosav, c_adosav;

/*
<10000, fizetendo 0
A 800
B 600
C 100
*/

int ado(std::string adosav, std::string alapterulet) {
    int fizetendo;
    int alapterulet_int = std::stoi(alapterulet);

    if (adosav == "A") {
        fizetendo = a_adosav*alapterulet_int;
    }
    if (adosav == "B") {
        fizetendo = b_adosav*alapterulet_int;
    }
    if (adosav == "C") {
        fizetendo = c_adosav*alapterulet_int;
    }

    if (fizetendo < 10000) {
        fizetendo = 0;
    }

    return fizetendo;
}

int main() {
    std::string szo; // az eppen beolvasott szo az utca.txt fajlbol
    int telkek_szama = 0; // elso sor nem szamit teleknek
    std::ifstream fajl;

    // 2
    fajl.open("utca.txt");
    while(std::getline(fajl, szo)) {
        telkek_szama++;
    }
    fajl.close();

    printf("2. feladat: A mintaban %i telek szerepel.\n", telkek_szama-1); // -1 elso sor
    // 2 end

    telkek_szama++;
    // kibebaszott beolvasas
    std::string telkek_adatai[telkek_szama][5];
    int adok = 0, szavak = 0, sorok = 0;
    bool ado_beolvasva = false;
    fajl.open("utca.txt");
    while (fajl >> szo) {
        if (sorok == 0 && szavak == 3) { szavak = 0; sorok++; ado_beolvasva = true; telkek_adatai[sorok][szavak] = szo; }
        else if (sorok == 0) { telkek_adatai[sorok][szavak] = szo; }
        else if (ado_beolvasva = true) {
            if (szavak == 5) {
                szavak = 0;
                sorok++;
            }

            telkek_adatai[sorok][szavak] = szo;
        }
        szavak++;
    }
    fajl.close();
    // kibebaszott beolvasas vege

    a_adosav = std::stoi(telkek_adatai[0][0]);
    b_adosav = std::stoi(telkek_adatai[0][1]);
    c_adosav = std::stoi(telkek_adatai[0][2]);

    std::string tulaj_adoszama;
    bool tulaj_letezik = false;
    std::cout << "3. feladat: Egy tulajdonos adoszama: ";
    std::cin >> tulaj_adoszama;

    int a = 0, b = 0, c = 0;
    int a_fizetendo = 0, b_fizetendo = 0, c_fizetendo = 0;

    for (int sor = 1; sor < telkek_szama; sor++) {
        // 3. feladat
        if (telkek_adatai[sor][0] == tulaj_adoszama) {
            std::cout << telkek_adatai[sor][1] << " utca " << telkek_adatai[sor][2] << std::endl;
            tulaj_letezik = true;
        }

        // 5. feladat
        if (telkek_adatai[sor][3] == "A") { a++, a_fizetendo += ado("A", telkek_adatai[sor][4]); }
        if (telkek_adatai[sor][3] == "B") { b++, b_fizetendo += ado("B", telkek_adatai[sor][4]); }
        if (telkek_adatai[sor][3] == "C") { c++, c_fizetendo += ado("C", telkek_adatai[sor][4]); }

    }
    if (tulaj_letezik == false) { std::cout << "Nem szerepel az adatallomanyban." << std::endl; }

    printf("5. feladat\nA savba %i telek esik, az ado %i Ft", a, a_fizetendo);
    printf("\nB savba %i telek esik, az ado %i Ft", b, b_fizetendo);
    printf("\nC savba %i telek esik, az ado %i Ft", c, c_fizetendo);

    std::vector<std::string> utcak;
    std::vector<std::string> zonak;

    for (int sor = 1; sor < telkek_szama; sor++) {
        if (std::find(utcak.begin(), utcak.end(), telkek_adatai[sor][1]) == utcak.end()) {
            utcak.push_back(telkek_adatai[sor][1]);
        }
    }
    // utolso ketto feladat hianyzik
}