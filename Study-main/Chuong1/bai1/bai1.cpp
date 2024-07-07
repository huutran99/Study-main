#include <iostream>

int main()
{
    int n;
    std::cout<<"Nhap n: ";
    std::cin>>n;
    int S = 0;

    for(int i = 0; i <= n; i++)
    {
        S = S + i;
    }
    std::cout<<"Tong S la: "<<S;
}