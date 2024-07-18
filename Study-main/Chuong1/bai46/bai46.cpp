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
    int S = 0;
    for(;n!=0;)
    {
        int last_number;

        last_number = n % 10;
        
        if(last_number % 2 != 0)
        {
            dem++;
        }

        n = n/10;
    }
    std::cout<<"So luong chu so le cua so nguyen duong n la: "<<dem;
}