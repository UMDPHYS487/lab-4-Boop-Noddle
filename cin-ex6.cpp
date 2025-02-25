// your code here
#include <iostream>

int y;
int *x;

int main() {
    std::cout << "Address of y is set to some garbage value" << std::endl;
    for (int i = 0; i < 5; i++){
        std::cout << "Address of y: " << &y << std::endl;
    }
    x = &y;
    std::cout << "Value of pointer x before changing y: " << x << std::endl;
    y = 10;
    std::cout << "Value of pointer x after changing y: " << x << std::endl;
    std::cout << "Dereferencing pointer x: " << *x << std::endl;
    std::cout << "Value of Dereferenced pointer x before changing y again: " << *x << std::endl;
    y = 20;
    std::cout << "Value of Dereferenced pointer x after changing y again: " << *x << std::endl;
}