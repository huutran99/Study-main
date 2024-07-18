#include <iostream>
#include <math.h>

int main()
{
    int n,max;
    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    for(;n!=0;)
    {
        int last_number;

        last_number = n % 10;
        if(max < last_number)
        {
            max = last_number;
        }
        n = n/10;
    }
    std::cout<<"Chu so lon nhat cua so nguyen duong n la: "<<max;
}