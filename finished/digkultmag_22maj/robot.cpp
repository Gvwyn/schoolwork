#include <iostream>

int main() {
    std::string utasitas;
    int e = 0, d = 0, k = 0, n = 0;
    int x = 0, y = 0;

    std::cout << "Kerem a robot parancsait: ";
    std::cin >> utasitas;
    for (char betu : utasitas) {
        if (betu == 'E') { e++; x++; }
        if (betu == 'D') { d++; x--; }
        if (betu == 'K') { k++; y++; }
        if (betu == 'N') { n++; y--; } 
    }
    
    printf("E betuk szama: %i\nD betuk szama: %i\nK betuk szama %i\nN betuk szama: %i\n", e, d, k, n);
    std::cout << "Egy legrovidebb ut parancsszava: ";
    
    if (y >= 0) { std::cout << std::string(y, 'E'); }
    if (y < 0) { std::cout << std::string(-y, 'D'); }
    if (x >= 0) { std::cout << std::string(x, 'K'); }
    if (x < 0) { std::cout << std::string(-x, 'N'); }
}