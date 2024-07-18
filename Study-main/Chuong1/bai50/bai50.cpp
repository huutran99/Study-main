#include <iostream>
#include <math.h>
#include <vector>

int main()
{
    int n,dem;
    int nghichdao;
    std::vector<int> a;
    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    while(n>0)
    {
        int last_number;
        last_number = n%10;
        nghichdao = nghichdao * 10 + last_number;
        n/=10;
    }
    std::cout<<"Ngich dao cua so nguyen duong n la: "<<nghichdao;
}