#include<iostream>
#include<math.h>
#include<vector>
int main()
{
    int n;
    std::vector<int> v;
    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    for(int i=1; i<=n; i++)
    {
        if(n % i ==0)
        {
            v.push_back(i);
        }
    }
    std::cout<<"So luong uoc so cua so nguyen duong n la: "<<v.size();
}