// Add your code here
#include <iostream>

int factorialWithRecursion(int n){
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorialWithRecursion(n - 1);
    }
}

int main(){
    std::cout << "Enter the value of n" << std::endl;
    int n;
    std::cin >> n;
    std::cout << "The factorial of "<< n << " is " << factorialWithRecursion(n);
    return 0;
}