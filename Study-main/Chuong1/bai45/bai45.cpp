#include <iostream>
#include <math.h>

int main()
{
    int n;
    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    int S = 1;
    for(;n!=0;)
    {
        int last_number;

        last_number = n % 10;

        S = S * last_number;

        n = n/10;
    }
    std::cout<<"Gia tri cua S la: "<<S;
}