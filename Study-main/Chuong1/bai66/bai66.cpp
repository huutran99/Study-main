#include <iostream>
#include <math.h>

int GPTB2(float a, float b, float c, float &x1, float &x2)
{
    float delta = b*b - 4*a*c;

    if(delta < 0)
    {
        return 0;
    }

    if(delta == 0)
    {
        x1 = x2 = -b/(2*a);
        return 1;
    }

    if(delta > 0)
    {
        x1 = (-b + sqrt(delta))/(2*a);

        x2 = (-b - sqrt(delta)/(2*a));
        return 2;
    }
}

int main()
{
    float a,b,c, X1, X2;

    do
    {
        std::cout<<"Nhap so a: ";
        std::cin>>a;
        std::cout<<"Nhap so b: ";
        std::cin>>b;
        std::cout<<"Nhap so c: ";
        std::cin>>c;
    }
    while(a == 0);

    if(GPTB2(a,b,c, X1, X2) == 0)
    {
        std::cout<<"Phuong trinh vo nghiem";
    }
    if(GPTB2(a, b, c, X1, X2) == 1)
    {
        if(X1 < 0)
        {
            std::cout<<"Phuong trinh vo nghiem";
        }
        if(X1 == 0)
        {
            std::cout<<"Phuong trinh co 1 nghiem: "<<0;
        }
        if(X1 > 0)
        {
            std::cout<<"x1: "<<sqrt(X1);

            std::cout<<"x2: "<<-sqrt(X2);
        }
    } 
    if(GPTB2(a, b, c, X1, X2) == 2)
    {
        if(X1 < 0)
        {
            if(X2 < 0)
            {
                std::cout<<"Phuong trinh vo nghiem";
            }
            if(X2 == 0)
            {
                std::cout<<"Phuong trinh co 1 nghiem: "<<0;
            }
            if(X2 > 0)
            {
                std::cout<<"x1: "<<sqrt(X2);

                std::cout<<"x2: "<<-sqrt(X2);
            }
        }
        if(X1 == 0)
        {
            if(X2 <= 0)
            {
                std::cout<<"Phuong trinh co 1 nghiem: "<<0;
            }
            else
            {
                std::cout<<"Phuong trinh co 3 nghiem: "<<"\n";
                std::cout<<"x1: "<<sqrt(X2)<<"\n";
                std::cout<<"x2: "<<-sqrt(X2)<<"\n";
                std::cout<<"x3: "<<0;
            }
        }
        if(X1 > 0)
        {
            if(X2 < 0)
            {
                std::cout<<"Phuong trinh co 2 nghiem: "<<"\n";
                std::cout<<"x1: "<<sqrt(X1)<<"\n";
                std::cout<<"x2: "<<-sqrt(X1)<<"\n";
            }
            if(X2 == 0)
            {
                std::cout<<"Phuong trinh co 3 nghiem: "<<"\n";
                std::cout<<"x1: "<<sqrt(X1)<<"\n";
                std::cout<<"x2: "<<-sqrt(X1)<<"\n";
                std::cout<<"x3: "<<0;
            }
            if(X2 > 0)
            {
                std::cout<<"Phuong trinh co 4 nghiem: "<<"\n";
                std::cout<<"x1: "<<sqrt(X1)<<"\n";
                std::cout<<"x2: "<<-sqrt(X1)<<"\n";
                std::cout<<"x3: "<<sqrt(X2)<<"\n";
                std::cout<<"x4: "<<-sqrt(X2)<<"\n";
            }
        }
    }    
}