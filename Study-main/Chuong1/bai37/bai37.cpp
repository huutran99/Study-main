#include<iostream>
#include<math.h>

int main()
{
    int n;
    do
    {
        std::cout<<"Nhap so n dau can: ";
        std::cin>>n;
    } while (n<1);
    float S = 0;

    for(int i = 2; i <= n; i++)
    {
        S = pow((S + i), (1.0/i));
    }
    std::cout<<"Gia tri bieu thuc S la: "<<S;
}