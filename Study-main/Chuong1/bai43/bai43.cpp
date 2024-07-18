#include <iostream>
#include <math.h>

int main()
{
    int n,dem;
    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    while (n>=10)
    {
        n/=10;
        dem++;
    }
    std::cout<<"so nguyen duong n la so co "<<dem + 1<<" chu so"; 
    
}