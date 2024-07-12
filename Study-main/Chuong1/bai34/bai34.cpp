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

    for(int i = n-1; i >=0; i--)
    {
        S = sqrt(n - i + S);
    }
    std::cout<<"Gia tri bieu thuc S la: "<<S;
}