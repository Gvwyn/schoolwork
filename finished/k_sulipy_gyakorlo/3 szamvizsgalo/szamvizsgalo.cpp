#include <bits/stdc++.h>
#include <math.h>

int main() {
    int input;
    while(1) {
    std::cout << "Adjon meg egy [-100,000;100,000] tartomanyba eso szamot! ";
    std::cin >> input;
    if (100000 >= input && -100000 <= input) { break; }
    }

    std::string parosparatlan, oszthatoe;
    if (input % 2 == 0) { parosparatlan = "paros"; }
    else { parosparatlan = "paratlan"; }
    if (input % 3 != 0) { oszthatoe = "nem "; }

    std::cout << "2. feladat\nA szam " << parosparatlan << ", es " << oszthatoe << "oszthato harommal." << std::endl;
    std::cout << "3. feladat\nA szam abszolut erteke " << std::abs(input) << std::endl;
    std::cout << "4. feladat" << std::endl;
    if (input % 5 == 0) { std::cout << "A szam oszhato ottel." << std::endl; }
    else { 
        // general form of rounding up
        // ( (n + denominator - 1) / denominator) * denominator
        int ottel = std::abs( ( (input+4)/5 ) * 5 ); 
        std::cout << "A szam abszolut ertekehez legkozelebb eso nala nagyobb ottel oszhato szam a " << ottel << std::endl;
        }

    std::string inputstr = std::to_string(input);
    std::cout << "5. feladat\nA kozepso szamjegy(ek): ";
    if (inputstr.length() % 2 != 0) { std::cout << inputstr[inputstr.length()/2]; }
    else { std::cout << inputstr[inputstr.length()/2-1] << inputstr[inputstr.length()/2]; }
}