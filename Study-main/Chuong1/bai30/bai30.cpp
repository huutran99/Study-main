#include<iostream>
#include<math.h>
#include<vector>
int main()
{
    int n,S;
    std::vector<int> v;
    do
    {
        std::cout<<"Nhap so nguyen duong n: ";
        std::cin>>n;
    } while (n<1);
    for(int i=1; i<n; i++)
    {
        if(n % i ==0)
        {
            v.push_back(i);
        }
    }
    for(int i = 0; i<v.size(); i++)
    {
        S = S + v.at(i);
    }
    if(S == n)
    {
        std::cout<<"n la so hoan thien";
    }
    else
    {
        std::cout<<"n khong phai la so hoan thien";
    }
}