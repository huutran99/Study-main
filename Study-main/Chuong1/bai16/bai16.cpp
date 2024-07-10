#include<iostream>
#include<math.h>

int main()
{
    float x,n;
    std::cout<<"Nhap x: ";
    std::cin>>x;
    do
    {
        std::cout<<"Nhap n: ";
        std::cin>>n;
    } while (n<=0);
    float S = 0;
    float F = 0;
    for(int i=1; i<=n; i++)
    {
        F = F + i;
        S = S + pow(x, i)/F;
    }
    std::cout<<"Gia tri bieu thuc S la: "<<S;
}