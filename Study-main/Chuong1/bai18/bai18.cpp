#include<iostream>
#include<math.h>

int giaithua(int n)
{
    int giaithua = 1;
    for(int i=1; i<=n; i++)
    {
        giaithua = giaithua * i;
    }
    return giaithua;
}

int main()
{
    float S = 0;
    int n = 0;
    float x = 0;
    std::cout<<"Nhap x: ";
    std::cin>>x;
    do
    {
        std::cout<<"Nhap n: ";
        std::cin>>n;
    } while (n<1);
    
    for(int i = 0; i<=n; i++)
    {
        S = S + pow(x, 2*i)/giaithua(2*i);
        std::cout<<pow(x, 2*i)<<" "<<giaithua(2*i)<<std::endl;
    }
    std::cout<<"Gia tri bieu thuc S la: "<<S;
}