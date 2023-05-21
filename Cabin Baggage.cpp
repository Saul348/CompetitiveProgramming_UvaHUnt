Cabin Baggage
#include <iostream>
void fill_input(float* a, int n){
    for(int i = 0; i < n; i++){
        std::cin>> a[i];
    }
}
void print_arra(float* a, int n){
    for(int i = 0; i < n; i++){
        std::cout<<" " <<a[i]<<" ";
    }
}
void filtro(float* a, int n){
    
    for(int i = 0; i< n; i+= 4){
        if(a[i]+a[i+1]+a[i+2]<=125|| a[i]==56 && a[i+1]==45&& a[i+2]== 25){
            if(a[i+3]<= 7) std::cout<< " 1 "<< std::endl;
            else std::cout<< " 0 "<< std::endl;
        } else std::cout<< " 0 "<< std::endl;
    }
}
int main()
{   int tamano= 0;
    std::cin>> tamano; 
    tamano= tamano*4;
    float input[tamano]= {0};
    fill_input(input, tamano);
    filtro(input, tamano);
    return 0;
}