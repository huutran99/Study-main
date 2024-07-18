#include <iostream>
#include <math.h>

int main()
{
    int n,fist_number;
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
        fist_number = last_number;
        n = n/10;
    }
    std::cout<<"Chu so dau tien cua so nguyen duong n la: "<<fist_number;
}