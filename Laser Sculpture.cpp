-----Laser Sculpture----------
#include <iostream>
void sculp(int* a, int n, int h){
    int cuenta= h-a[0];
    for(int i = 0; i < n-1; i++){
        if (a[i]>a[i+1]){
            cuenta+= (a[i]-a[i+1]);
        }
    }
    std::cout<< cuenta;
}

int main()
{
    int a= 4;
    int b= 3;
    int array[b]= {4,4,1};
    sculp(array, b, a);
    
    return 0;
}