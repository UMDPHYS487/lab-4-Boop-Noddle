// Add your code here
#include <iostream>

int factorialWithoutRecursion(int n){
    int result = 1;
    for (int i = 1; i <= n; i++){
        result *= i;
        std::cout << "The factorial of " << i << " is: " << result << std::endl;
    }
    return result;
}

int main(){
    std::cout << "Enter the value of n" << std::endl;
    int n;
    std::cin >> n;
    factorialWithoutRecursion(n);
    return 0;
}