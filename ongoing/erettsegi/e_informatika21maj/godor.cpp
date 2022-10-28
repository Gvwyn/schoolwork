#include <bits/stdc++.h>
#include <fstream>

int main() {
    std::ifstream fajl;
    int melyseg; // eppen beolvasott melyseg
    float erintetlen = 0, erintett = 0;
    std::vector<int> godrok;

    fajl.open("melyseg.txt");
    while(fajl >> melyseg) {
        godrok.push_back(melyseg);
        if (melyseg == 0) { erintetlen++; }
        else { erintett++; }
    }
    fajl.close();

    printf("1. feladat\nA fajl adatainak szama: %i\n\n", godrok.size());

    int feladat2;
    std::cout << "2. feladat\nAdjon meg egy tavolsagerteket! ";
    std::cin >> feladat2;
    feladat2--;
    printf("Ezen a helyen a felszin %i meter melyen van\n\n", godrok[feladat2]);

    printf("3. feladat\nAz erintetlen terulet aranya %.2f%%\n\n", erintetlen/erintett*100);

    std::ofstream godorfajl;
    godorfajl.open("godor.txt", std::ios::binary);
    int hanyadik_godorben;
    bool feladat2_godorbe_talal = false;
    bool godorben;
    std::vector<int> godrok_helyei;
    int godrok_szama = 0;
    for (int x = 0; x < godrok.size(); x++) {
        if (!godorben && godrok[x] == 0) {
            continue;
        }

        else if (!godorben && godrok[x] != 0) {
            if (x == feladat2) { hanyadik_godorben = godrok_szama; feladat2_godorbe_talal = true; }
            godorfajl << godrok[x] << " ";
            godorben = true;
            godrok_helyei.push_back(x+1);
        }

        else if (godorben && godrok[x] != 0) {
            if (x == feladat2) { hanyadik_godorben = godrok_szama; feladat2_godorbe_talal = true; }
            godorfajl << godrok[x] << " ";
        }

        else if(godorben && godrok[x] == 0) {
            godorben = false;
            godrok_helyei.push_back(x);
            godorfajl << "\n";
            godrok_szama++;
        }
    }
    godorfajl.close();
    printf("5. feladat\nA godrok szama %i\n\n", godrok_szama);

    printf("6. feladat\n");

    int hanyadik = 0;
    if (feladat2_godorbe_talal) {
        // a)
        for (int x = 0; x < godrok_helyei.size(); x+2) {
            if(hanyadik == hanyadik_godorben) {
                printf("a) A godor kezdete %i meter, a godor vege %i meter", godrok_helyei[x], godrok_helyei[x+1]);
                break;
            }
            hanyadik++;
        }
        // b)
        fajl.open("godor.txt");
        std::string sor;
        int sorszam = 0;
        // jelenleg az egesz fajlt beolvassa
        while ( std::getline(fajl, sor) ) {
            if (sorszam == hanyadik_godorben) {
                std::cout << sor;
                }
            }
    }
}