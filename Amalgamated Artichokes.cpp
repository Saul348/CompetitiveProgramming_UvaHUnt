---------Amalgamated Artichokes---------
#include <iostream>
#include <cmath>
float function(int p, int a, int b, int c, int d, int n){
    return p*( sin(a*n + b) + cos(c*n + d) + 2);
}
void fill_input(int* a, int n){
    for(int i= 0; i< n; i++){
        std::cin>>a[i]; 
    }
    
}
void fill_array(float* a, int* input){
    for(int i= 0; i< input[5]; i++){
        a[i]= function(input[0], input[1], input[2],input[3], input[4], i);
    }
}

void print_arr(float* a, int n){
    for(int i= 0; i< n; i++){
        std::cout<< " "<< a[i]<< " ";
    }
}
void Big_Range(float* a, int n){
    int i= 0;
    float max= 0;
    int j= 1;
    while( i< n-1){
        while(a[i]>a[j]){
            if(a[i]-a[j]>max){
                max= a[i]-a[j];
                j++;
            }
            else j++;
            if (j>= n){
                break;
            }
        }
        i= j;
        j++;
    }
    std::cout<< max<< std::endl;
}


int main()
{
    int input[6]= {0};
    fill_input(input, 6);
    float arr[input[5]]= {0};
    fill_array(arr, input);
    Big_Range(arr,input[5]);
    return 0;
}
