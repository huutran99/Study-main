#include<iostream>
#include<math.h>

int main()
{
    int n=0;
    do
    {
        std::cout<<"Nhap n: ";
        std::cin>>n;
    } while (n<0);
    float S = 0;

    for(int i = 0; i < n; i++)
    {
        S = S + (float)(2*i + 1)/(2*i + 2);
    }
    std::cout<<"Tong S la: "<<S;
}