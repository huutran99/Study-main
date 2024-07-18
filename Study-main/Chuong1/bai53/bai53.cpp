#include <iostream>
#include <math.h>
#include <vector>
int main()
{
    long long n;
    long dem,max = 0;
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
        if(max < last_number)
        {
            max = last_number;
        }
        n = n/10;
    }
    std::cout<<max<<"\n";
    for(int i = 0; i<a.size(); i++)
    {
        std::cout<<a.at(i)<<" ";
        if(max == a.at(i))
        {
            dem++;
        }
    }
    std::cout<<"So luong chu so lon nhat cua so nguyen duong n la: "<<dem;
}