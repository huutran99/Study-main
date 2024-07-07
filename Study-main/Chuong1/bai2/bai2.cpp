#include <iostream>
#include <math.h>
int main()
{
    int n;

    std::cout<<"Nhap n: ";
    std::cin>>n;
    int S = 0;

    for(int i = 1; i <=n; i++)
    {
        S = S + pow(i, 2);
    }
    std::cout<<"tong S la: "<<S;
}