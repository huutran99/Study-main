#include <iostream>
#include <math.h>

int main()
{
    int n;

    do
    {
        std::cout<<"Nhap n: ";
        std::cin>>n;
    } while (n<1);
    
    float S,T = 0;

    for(int i = 1; i <= n; i++)
    {
        T = T + i; 
        S = S + (pow(-1, i+1) * 1/T);
    }

    std::cout<<"Gia tri cua bieu thuc S la: "<<S;
}