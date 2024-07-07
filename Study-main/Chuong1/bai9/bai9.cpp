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
    float T = 1;

    for(int i = 1; i <=n; i++)
    {
        T = T * i;
    }
    std::cout<<"Gia tri cua T la: "<<T;
}