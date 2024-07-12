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

    for(int i = 1; i <= n; i++)
    {
        S = sqrt(2 + S);
    }
    std::cout<<"Gia tri bieu thuc S la: "<<S;
}