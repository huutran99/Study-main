#include<iostream>
#include<math.h>

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
    int n;
    do
    {
        std::cout<<"Nhap so n dau can: ";
        std::cin>>n;
    } while (n<1);
    float S = 0;

    for(int i = 1; i <=n; i++)
    {
        S = sqrt(S + giaithua(i));
    }
    std::cout<<"Gia tri bieu thuc S la: "<<S;
}