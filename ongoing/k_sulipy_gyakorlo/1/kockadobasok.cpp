#include <bits/stdc++.h>
#include <vector>

int main() {
    srand(time(NULL));
    int dobasok_szama;
    std::vector<int> dobasok;
    std::cout << "1. feladat\nAdd meg a dobasok szamat! ";
    std::cin >> dobasok_szama;

    int temp, lepesek = 0, hatosok = 0, paros = 0, feladat6 = 0;
    std::cout << "2. feladat\nDobasok: ";
    for (int x = 0; x < dobasok_szama; x++) {
        temp = rand() % 6 + 1;
        std::cout << temp << " ";
        dobasok.push_back(temp);
        lepesek += temp;

        if (temp == 6) { hatosok++; }
        else if (temp % 2 == 0) {
            paros++;
        }
    }

    float atlag = static_cast<float>(lepesek) / static_cast<float>(dobasok_szama);
    printf("\n3. feladat\nAtlagosan %.2f, osszesen %i mezot haladt elore.\n", atlag, lepesek);

    std::cout << "4. feladat" << std::endl;
    if (hatosok != 0) { printf("Botond %i alkalommal dobott hatost.\n", hatosok); }
    else { std::cout << "Botond egyszer se dobott hatost." << std::endl; } 

    printf("5. feladat\nBotond %i alkalommal dobott paros szamot.\n", paros);


    for (int x = 0; x < dobasok.size()-1; x++) {
        if (dobasok[x] < dobasok[x+1]) {
            feladat6++;
        }
    }
    printf("6. feladat\nBotond %i alkalommal dobott tobbet, mint az azt megelozo korben.", feladat6);
}