#include <iostream>
#include <math.h>
#include <vector>
int main()
{
    long long n;
    long dem = 0;
    std::vector<int> a;
    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    for(;n!=0;)
    {
        int last_number;

        last_number = n % 10;
        a.push_back(last_number);
        n = n/10;
    }
    for(int i = 0; i<a.size(); i++)
    {
        std::cout<<a.at(i)<<" ";
        if(a.at(i) % 2  != 0)
        {
            dem++;
        }
    }
    if(dem == 0)
    {
        std::cout<<"So nguyen duong n toan la so chan";
    }
    else
    {
        std::cout<<"So nguyen duong n khong toan la so chan";
    }
}