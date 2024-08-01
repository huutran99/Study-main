#include <iostream>
#include <math.h>

int main()
{
    int a,b,c;
    double x1, x2;
    std::cout<<"Nhap so a: ";
    std::cin>>a;
    std::cout<<"Nhap so b: ";
    std::cin>>b;
    std::cout<<"Nhap so c: ";
    std::cin>>c;

    int delta = 0;

    delta = b*b - 4*a*c;

    if(delta < 0)
    {
        std::cout<<"Phuong trinh vo nghiem";
    }
    if(delta == 0)
    {
        x1 = x2 = -b/(2*a);
        std::cout<<"Phuong trinh co nghiem kep la: "<<x1;
    }
    if(delta > 0)
    {
        x1 = (-b + sqrt(delta))/(2*a);

        x2 = (-b - sqrt(delta))/(2*a);

        std::cout<<"Phuong trinh co 2 nghiem phan biet x1 va x2 lan luot la:"<<x1<<"   "<<x2;
    }
}