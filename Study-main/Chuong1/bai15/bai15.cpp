#include<iostream>
#include<math.h>

int main()
{
    float n;
    do
    {
        std::cout<<"Nhap n: ";
        std::cin>>n;
    } while (n<0);
    float S = 0;
    float F = 0;
    for(int i=1; i<=n; i++)
    {
        F = F + i;
        S = S + 1.0/F;
    } 
    std::cout<<"Gia tri bieu thuc S la: "<<S;
} 