#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int* jjj;
    for(int k = 0; k<100000000; k++) {
        jjj = new int;
        int lll = k % 10000;
        if(lll < 1) {
            std::cout << "k is " << k << " " <<lll<< std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
        delete jjj;
    }
    std::cout << "Big Pause Before exiting" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100000));
    return 0;
}