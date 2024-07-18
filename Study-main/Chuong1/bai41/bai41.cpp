#include <iostream>
#include <math.h>

int main()
{
    int n;
    float S = 1;
    do
    {
        std::cout<<"Nhap so n dau phan so: ";
        std::cin>>n;
    } while (n<1);

    for(int i = 0; i<n; i++)
    {
        S = 1.0/(1+S);
    }
    std::cout<<"Gia tri cua bieu thuc S la: "<<S;
}