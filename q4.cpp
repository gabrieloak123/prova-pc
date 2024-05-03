#include <iostream>
#include <iomanip>

int main(){
    int n;
    float hours, speed;
    float distance = 0;
    
    std::cout << "Digite quantos intervalos foram registrados: ";
    std::cin >> n;

    while(n--){
        std::cout << "Digite o intervalo de tempo(em horas) e a velocidade(em km/h), respectivamente: ";
        std::cin >> hours >> speed;
        
        distance += hours * speed;
    }

    std::cout << "A distância percorrida pelo veículo foi de " << std::fixed << std::setprecision(2) << distance << " Km" << std::endl; 
}
