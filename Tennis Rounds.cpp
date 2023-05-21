-------Tennis Rounds-----

#include <iostream>

#include <cmath>
int match(int N, int k_1, int k_2){
    int m= pow(2,N-1);
    if(N==1) return 1;
    if(k_1 <= m && k_2> m ||k_1 > m && k_2<= m) return N;
    else if(k_1> m && k_2>m) match(N-1, k_1%m, k_2%m);
    else match(N-1, k_1, k_2);
}

int main()
{
    int N= 4;
    int k_1= 11;
    int k_2= 12;
    std::cout<<match(N, k_1, k_2);
    return 0;
}
