#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // valos veletlen szamok
    int dobasok_szama, dobas;
    int eredmeny = 0, anni = 0, panni = 0;
    std::cout << "Hany alkalommal legyen feldobas? ";
    std::cin >> dobasok_szama;

    for (int x = 0; x < dobasok_szama; x++) {
        std::cout << "Dobas: ";
        for (int y = 0; y < 3; y++) {
            dobas = rand() % 6 + 1;
            eredmeny += dobas;
            if (y < 2) { std::cout << dobas << " + "; }
            else { std::cout << dobas; }
        }

        std::cout << " = " << eredmeny;
        if (eredmeny < 10) { anni++; std::cout << " Nyert: Anni"; }
        else { panni++; std::cout << " Nyert: Panni"; }
        std::cout << std::endl;
        eredmeny = 0;
    }
    printf("A jatek soran %i alkalommal nyert Anni, %i alkalommal Panni nyert", anni, panni);
}