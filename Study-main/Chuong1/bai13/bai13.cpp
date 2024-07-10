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
    } while (n<1);
    float S = 0;

    for(int i=1; i<=n; i++)
    {
        S = S + pow(x, (2*i));
    }
    std::cout<<"Gia tri bieu thuc S la: "<<S;
}