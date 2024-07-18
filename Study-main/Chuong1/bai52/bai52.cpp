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
    int min = n;
    for(;n!=0;)
    {
        int last_number;

        last_number = n % 10;
        if(min > last_number)
        {
            min = last_number;
        }
        n = n/10;
    }
    std::cout<<"Chu so nho nhat cua so nguyen duong n la: "<<min;
}