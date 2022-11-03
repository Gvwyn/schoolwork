#include <bits/stdc++.h>
// gyozelem +3, dontetlen +1
// gyozelem: 1, vereseg: 2, dontetlen: x

int main() {
    std::string eredmeny;
    std::cout << "1. feladat\nAdja meg a kosarlabdacsapat eredmenyet!\ngyozelem: 1, vereseg: 2, dontetlen: x" << std::endl;
    std::getline(std::cin, eredmeny);

    int veresegek = 0, pontszam = 0, gyozelmi_temp = 0, gyozelmi_szeria = 0;
    // 2-4. feladat
    for (char a : eredmeny) {
        if (a == '1') { gyozelmi_temp++; pontszam += 3; }
        else if (a == '2') { veresegek++; }
        else if (a == 'x') { pontszam += 1; }

        // 4. feladat
        if (a == '2' || a == 'x') {
            if (gyozelmi_temp > gyozelmi_szeria) { gyozelmi_szeria = gyozelmi_temp; }
            gyozelmi_temp = 0;
        }
    }

    std::cout << "2. feladat\nFordulok szama: " << eredmeny.length() << "\nVeresegek szama: " << veresegek << std::endl; 
    std::cout << "3. feladat\nA fordulok soran szerzett osszpontszam: " << pontszam << std::endl;
    std::cout << "4. feladat\nA leghosszabb gyozelmi szeria " << gyozelmi_szeria << " fordulon at tartott." << std::endl;

    // 5. feladat
    std::cout << "5. feladat" << std::endl;
    for (int x = 0; x < eredmeny.length()-2; x++) {
        if (eredmeny[x] == '2' && eredmeny[x+1] == 'x' && eredmeny[x+2] == '1') {
            std::cout << "Volt vereseg-dontetlen-gyozelem harmas a szezonban." << std::endl;
            if (x+2 != eredmeny.length()-1) {
                switch(eredmeny[x+3]) {
                    case '1':
                        std::cout << "Ezutan gyozelem kovetkezett." << std::endl;
                    case '2':
                        std::cout << "Ezutan vereseg kovetkezett." << std::endl;
                    case 'x':
                        std::cout << "Ezutan dontetlen kovetkezett." << std::endl;
                }
            }
            else {
                std::cout << "Ezutan nem volt tobb merkozes." << std::endl;
            }
        }
    }

}