#include <iostream>
#include <math.h>

int main()
{
    int a,b;

    do
    {
        std::cout<<"Nhap so nguyen duong a: ";
        std::cin>>a;
        std::cout<<"Nhap so nguyen duong b: ";
        std::cin>>b;
    } while (a<1 && b < 1);

    while (a * b != 0)
    {
        if(a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    std::cout<<"Uoc chung lon nhat cua 2 so a va b la: "<<a + b;   
}