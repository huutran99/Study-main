#include <iostream>
#include <math.h>

int main()
{
    int n;
    float x;

    float S= 0;
    do
    {
        std::cout<<"Nhap so n dau can: ";
        std::cin>>n;
    } while (n<1);
    std::cout<<"Nhap x: ";
    std::cin>>x; 
    
    for(int i = 1; i <= n; i++)
    {
        S = sqrt(S + pow(x, i));
    }
    std::cout<<"Gia tri cua bieu thuc S la: "<<S;
}