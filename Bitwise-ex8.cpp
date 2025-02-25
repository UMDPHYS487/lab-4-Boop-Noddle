// Your code here
#include <iostream>
#include <bitset>

// change all 0 to 1 and 1 to 0
int main() {
    std::bitset<8> b(0b01110010);
    std::cout << b << " (Initial value)" << std::endl;

    for (int i = 0; i < b.size(); i++) {
        b.flip(i);
        std::cout << b << std::endl;
    }

    std::cout << b << " (Final value)" << std::endl;
}
