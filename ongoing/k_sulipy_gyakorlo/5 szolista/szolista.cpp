#include <iostream>
#include <sstream>
#include <stdlib.h> // rand
#include <vector>
#include <time.h> // time(NULL)
// alma lapat hutoszekreny alma teto

int main() {
    srand(time(NULL));
    std::vector<std::string> szavak;
    std::string bevitel, szo, temp;

    std::cout << "1. feladat\nAdjon meg legalabb 4 betus szavakat vesszovel es szokozzel elvalasztva" << std::endl;
    std::getline(std::cin, bevitel);
    std::istringstream sbevitel(bevitel);

    while(sbevitel >> szo) {
        temp = szo;
        if (temp.length() >= 4) {
            if (temp[temp.length()-1] == ',') { temp.pop_back(); }
            szavak.push_back(temp);
        }
    }

    int legrovidebb = 4; 
    std::string leghosszabb_szo = "";
    bool ismetlodes = false;
    for (int x = 0; x < szavak.size(); x++) {
        if(legrovidebb > szavak[x].length()) {
            legrovidebb = szavak[x].length();
        }
        if(leghosszabb_szo.length() < szavak[x].length()) {
            leghosszabb_szo = szavak[x];
        }

        for (int y = 0; y < szavak.size(); y++) {
            if (szavak[x] == szavak[y] && x != y) { ismetlodes = true; }
        }
    }

    std::cout << "2. feladat" << std::endl;
    std::cout << ((ismetlodes) ? "Van ismetlodes." : "Nincs ismetlodes.") << std::endl;

    std::cout << "3. feladat\nA legrovidebb szo / szavak: ";
    for (int x = 0; x < szavak.size(); x++) {
        if (szavak[x].length() == legrovidebb) { std::cout << szavak[x] << " "; }
    }

    std::cout << "\n4. feladat\nA szo belsejeben levo betuk visszafele olvasva:\t";
    std::cout << leghosszabb_szo[0];
    for (int x = leghosszabb_szo.length()-2; x > 0; x--) {
        std::cout << leghosszabb_szo[x];
    }
    std::cout << leghosszabb_szo[leghosszabb_szo.length()-1];

    std::string a_szo = szavak[rand() % (szavak.size()-1) + 0];

    for(int x = 0; x < 100; x++) {
        std::swap(a_szo[rand() % (a_szo.length()-1) + 0], a_szo[rand() % (a_szo.length()-1) + 0]);
    }

    std::cout << "\n5. feladat\nA szo betui veletlenszeru sorrendben: " << a_szo << std::endl;
}