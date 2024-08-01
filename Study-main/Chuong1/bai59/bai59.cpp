#include <iostream>
#include <cmath>

int main()
{
    int n, nghichdao;
    int tmp;

    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    tmp = n;
    while(n>0)
    {
        int last_number;
        last_number = n % 10;
        nghichdao = nghichdao * 10 + last_number;
        n/=10;
    }
    if(nghichdao == tmp)
    {
        std::cout<<"so nguyen duong n la so doi xung";
    }
    else
    {
        std::cout<<"so nguyen duong n khong phai la so doi xung";
    }
}