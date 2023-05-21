------Bubble Sort-------(12004)

#include <iostream>

void average(long long  n){
     if(n*(n-1) % 4 == 0) std::cout<< n*(n-1)/4<<std::endl; 
     else if(n*(n-1)%2 == 0) std::cout<< n*(n-1)/2<< "/" << 2<<std::endl; 
     else std::cout<< n*(n-1)<< " / " << 4<<std::endl; 
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int num_casos, dato1;
    std::cin >> num_casos;
    for (int i = 0; i < num_casos; i++) {
        std::cin >> dato1;
        std::cout<< "Case "<< i+1<<": ";
        average(dato1);
    }
    return 0;
}