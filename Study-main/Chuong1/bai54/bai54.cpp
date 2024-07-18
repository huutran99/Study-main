#include <iostream>
#include <math.h>
#include <vector>
int main()
{
    long long n,min;
    long dem = 0;
    std::vector<int> a;
    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    min = n;
    for(;n!=0;)
    {
        int last_number;

        last_number = n % 10;
        a.push_back(last_number);
        if(min > last_number)
        {
            min = last_number;
        }
        n = n/10;
    }
    std::cout<<min<<"\n";
    for(int i = 0; i<a.size(); i++)
    {
        std::cout<<a.at(i)<<" ";
        if(min == a.at(i))
        {
            dem++;
        }
    }
    std::cout<<"So luong chu so nho nhat cua so nguyen duong n la: "<<dem;
}