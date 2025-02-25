// add your code here
#include <iostream>

int main() {
    // if x is less then 10 or even print x^2, else if x is odd -inf < x < inf print x/2 else print "hahaha"
    int x;
    enum state {EVENLESS10, ODD, OTHER};
    state currentState;
    std::cout << "Enter an integer" << std::endl;
    std::cin >> x;
    if(x < 10 && x % 2 == 0){
        currentState = EVENLESS10;
    }
    else if(x % 2 != 0){
        currentState = ODD;
    } else {
        currentState = OTHER;
    }
    // I could brute force it by swtiching x. This is the best i could come up with without brute forcing it.
    switch(currentState){
        case EVENLESS10:
            std::cout << "The square of " << x << " is: " << x * x << std::endl;
            break;
        case ODD:
            std::cout << "The half of " << x << " is: " << x / 2 << std::endl;
            break;
        case OTHER:
            std::cout << "hahaha" << std::endl;
            break;
        default:
            std::cout << "hahaha" << std::endl;
    }

    return 0;
}