#include <iostream>
#include <math.h>

int main()
{
    int a,b;

    int maxB;

    do
    {
        std::cout<<"Nhap so nguyen duong a: ";
        std::cin>>a;
        std::cout<<"Nhap so nguyen duong b: ";
        std::cin>>b;
    } while (a<1 && b <1);

    int step = std::max(a,b);

    maxB = a*b;

    for(int i = step; i<=maxB; i++)
    {
        if(i % a == 0 && i % b ==0)
        {
             std::cout<<"Boi chung nho nhat cua 2 so a va b la: "<<i<<"\n";
             break; 
        }
    }    
}