#include<iostream>
#include<math.h>

int main()
{
    int n=0;
    do
    {
        std::cout<<"Nhap n: ";
        std::cin>>n;
    } while (n<=0);
    float S = 0;

    for(int i = 1; i <= n; i++)
    {
        S = S + (float)i/(i + 1);
    }
    std::cout<<"Tong S la: "<<S;
}