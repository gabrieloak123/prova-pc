#include <iostream>

int main(){
    unsigned int seconds;
    
    std::cout << "Digite o tempo em segundos: ";
    std::cin >> seconds;

    unsigned int hours = seconds / 3600;
    seconds -= hours*3600;
    unsigned int minutes = seconds / 60;
    seconds -= minutes*60;

    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
}
