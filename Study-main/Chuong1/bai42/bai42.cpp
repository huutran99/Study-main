#include <iostream>
#include <math.h>

int main()
{
    int n;
    int S;
    int max = 0;
    do
    {
        std::cout<<"Nhap so n: ";
        std::cin>>n;
    } while (n<1);

    for(int i = 1; i<n; i++)
    {
        S = S + i;
        if(S < n)
        {
            if(max < i)
            {
                max = i;
            }
        }
        else
        {
            break;
        }
    }
    std::cout<<"Gia tri cua so k la: "<<max;
}