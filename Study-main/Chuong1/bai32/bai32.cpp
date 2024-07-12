#include<iostream>
#include<math.h>

int main()
{
    int n;

    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    int can = sqrt(n);
    if(can * can == n)
    {
        std::cout<<"n la so chinh phuong";
    }
    else
    {
        std::cout<<"n khong phai la so chinh phuong";
    }

}