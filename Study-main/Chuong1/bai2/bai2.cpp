#include <iostream>

int main()
{
    int n;

    std::cout<<"Nhap n: ";

    int S = 0;

    for(int i = 1; i <=n; i++)
    {
        S = S + pow(i, 2);
    }
    std::cout<<"tong S la: "<<S;
}