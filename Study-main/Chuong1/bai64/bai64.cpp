#include <iostream>
#include <math.h>

int main()
{
    int a, b;
    double x;
    std::cout<<"Nhap so a: ";
    std::cin>>a;
    std::cout<<"Nhap so b: ";
    std::cin>>b;

    if(a == 0)
    {
        std::cout<<"Phuong trinh vo nghiem";
    }
    else
    {
        x = -b/a;
        std::cout<<"nghiem cua phuong trinh la:"<<x;
    }
}