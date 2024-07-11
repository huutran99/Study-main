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
    int max;
    for(int i = 0; i<v.size(); i++)
    {
        if(v.at(i)%2 != 0)
        {
            if(max < v.at(i))
            {
                max = v.at(i);
            }
        }
    }
    std::cout<<"Uoc so le lon nhat cua so nguyen duong n la: "<<max;
}