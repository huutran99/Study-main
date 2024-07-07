#include<iostream>
#include<math.h>

int main()
{
    float n = 0;
    float x = 0;;
    float T = 0;
    std::cout<<"Nhap x: ";
    std::cin>>x;
    std::cout<<"Nhap n: ";
    std::cin>>n;
    T = pow(x, n);
    std::cout<<"Gia tri cua T la: "<<T;
}