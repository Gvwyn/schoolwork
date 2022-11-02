#include <bits/stdc++.h>
#include <vector>

int main() {
    bool exit = false;
    std::string input, tipus, mennyisegstr;
    int alkalmak = 0, uzemanyag = 0, mennyiseg = 0, benzinl = 0, legnagyobb = 0;

    std::cout << "1. feladat" << std::endl;
    while (!exit) {
        // reset
        input = ""; 
        tipus = "";
        mennyisegstr = "";
        mennyiseg = 0;
        // reset end

        std::cout << "Adja meg a uzemanyag tipusat es mennyiseget! (pl. B4, D23) :: ";
        std::getline(std::cin, input);
        if (input == "") { exit = true; break; }
        tipus += input[0];
        for (int x = 1; x < input.length(); x++) {
            mennyisegstr += input[x];
        }
        mennyiseg = std::stoi(mennyisegstr);
        if (tipus == "B") { benzinl += mennyiseg; } // 3. feladat
        if (mennyiseg != 0) { uzemanyag += mennyiseg; alkalmak++; } // 2. && 4. feladat
        if (mennyiseg > legnagyobb && tipus == "D") { legnagyobb = mennyiseg; } // 5. feladat
    }

    printf("2. feladat\nA benzinkuton %i alkalommal vasaroltak.\n", alkalmak);
    printf("3. feladat\n%il benzint adtak el osszesen.\n", benzinl);
    printf("4. feladat\nEgy alkalommal atlagosan %.2fl uzemanyagot vasaroltak.\n", static_cast<float>(uzemanyag)/static_cast<float>(alkalmak));
    printf("5. feladat\nAz egy alkalommal eladott legnagyobb diesel mennyiseg %i liter volt.", legnagyobb);
}