#include <iostream>
#include <cmath>
#include <vector>

int main()
{
    int n, dem;
    std::vector<int> a;

    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    while(n>0)
    {
        int last_number;
        last_number = n % 10;
        a.push_back(last_number);
        n/=10;
    }

    for(int i = 1; i < a.size(); i++)
    {
        if(a.at(i-1) < a.at(i))
        {
        }
        else
        {
            dem ++;
            std::cout<<"so nguyen duong n khong la so giam dan tu trai sang phai";
            break;
        }
    }
    if(dem == 0)
    {
        std::cout<<"so nguyen duong n la so giam dan tu trai sang phai";
    }
    
}