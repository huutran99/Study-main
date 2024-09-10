#include <bits/stdc++.h>

int giaithua(int a)
{
    int giaithua = 1;

    for(int i=1; i<=a; i++)
    {
        giaithua = giaithua * i;
    }
    return giaithua;
}

int main()
{
    int n,x;

    do
    {
        std::cout<<"nhap n: ";
        std::cin>>n;
        std::cout<<"nhap x: ";
        std::cin>>x;
    }
    while(n<1 && x<1);

    float S = 0;
    float T = 0;

    for(int i=1; i<=n; i++)
    {

        S = S + pow(-1, i)*(pow(x, i)/giaithua(i));
    }

    std::cout<<"Gia tri bieu thuc S la: "<<S;
}