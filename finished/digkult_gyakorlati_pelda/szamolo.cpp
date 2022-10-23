#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h>
#include <iostream>

int main() {
    srand(time(NULL));
    int a, b, c, d, valasz;
    int ok = 0, db = 0;
    std::cout << "Milyen muveletet szeretne gyakorolni?\n\t1. Osszeadas\n\t2. Kivonas\n\t3. Szorzas\nValasztas (1-3): ";
    std::cin >> valasz;

    while (ok != 5) {
        db++;
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        
        switch(valasz) {
            case 1:
                d = a+b;
                printf("%i+%i = ", a, b);
                std::cin >> c;
                break;
            case 2:
                d = a-b;
                printf("%i-%i = ", a, b);
                std::cin >> c;
                break;
            case 3:
                d = a*b;
                printf("%i*%i = ", a, b);
                std::cin >> c;
                break;
        }
        if (c == d) {
            std::cout << "Helyes!" << std::endl;
            ok++;
        } else { std::cout << "Helytelen!" << std::endl; }
    }
    printf("Gratulalunk!\nSikerult 5 helyes muveletet elvegezni %i probalkozasbol.", db);
}