#include <iostream>
#include <math.h>

int main()
{
    float x, n;

    std::cout<<"Nhap n: ";
    std::cin>>n;
    std::cout<<"Nhap x: ";
    std::cin>>x;

    float S = 0;

    for(int i = 1; i <= n; i++)
    {
        S = S + pow(-1, i)*pow(x, 2*i);
    }
    std::cout<<"Gia tri cua bieu thuc S la: "<<S;
}