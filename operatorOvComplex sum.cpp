#include<bits/stdc++.h>
using namespace std;



class Complex
{
    int real,img;

public:
    Complex(){}

    Complex(int a,int b)
    {
        real=a;
        img=b;
    }

    Complex operator+(Complex a)
    {
        Complex  temp;
        temp.real= this->real + a.real;
        temp.img= this->img + a.img;

        return temp;

    }

    void output()
    {
        cout<<"Complex sum : "<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1(2,3),c2(6,4);

    Complex c3;
    c3 = c1+c2;

    c3.output();




    return 0;
}
