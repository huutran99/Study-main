#include <iostream>

int main()
{
    int n=0;
    
    do
    {
        std::cout<<"Nhap n: ";
        std::cin>>n;  
    } while (n<=0);
    float S;

    for(int i=1; i<=n; i++)
    {
        S = S + 1.0/i;
    }
    std::cout<<"Tong S la: "<<S;
}