#include <iostream>
#include <math.h>

int main()
{
    int n;

    do
    {
        std::cout<<"Nhap n: ";
        std::cin>>n;
    } while (n<=0);
    float S=0;
    for(int i=1;i<=n;i++)
    {
        S = S + 1.0/(2*i);
    }
    std::cout<<"Tong S la: "<<S;
}