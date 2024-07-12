#include<iostream>
#include<math.h>
#include<vector>
int main()
{
    int n,dem;
    std::vector<int> v;
    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            dem++;  
        }
    }
    if(dem == 2)
    {
        std::cout<<"n la so nguyen to";
    }
    else
    {
        std::cout<<"n khong phai la so nguyen to";
    }
}