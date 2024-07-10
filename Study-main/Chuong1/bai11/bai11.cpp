#include<iostream>
#include<math.h>

int main()
{
    int n = 0;

    do
    {
        std::cout<<"Nhap n: ";
        std::cin>>n;
    } while (n<=0);
    float S = 0;
    float F = 1;
    for(int i = 1; i<=n; i++)
    {
        F = F * i;
        S = S + F;
    }
    std::cout<<"Gia tri bieu thuc S la: "<<S;
}