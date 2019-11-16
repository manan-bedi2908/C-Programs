#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,D,real,x1,x2;
    double imaginary;
    cout<<"\nEnter the coefficients a,b,c:";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D>0)
    {
        cout<<"\nRoots are real and different";
        x1=(-b+sqrt(D))/2*a;
        x2=(-b-sqrt(D))/2*a;
        cout<<"\nRoot 1:"<<" "<<x1;
        cout<<"\nRoot 2:"<<" "<<x2;
    }
    else if(D==0)
    {
        cout<<"\nRoots are real and same!";
        x1=(-b+sqrt(D))/2*a;
        cout<<"\nx1=x2"<<" "<<x1;
    }
    else if(D<0)
    {
        real=-b/(2*a);
        imaginary=sqrt(-D)/2*a;
        cout<<"Roots are imaginary and different";
        cout<<"\nx1="<<real<<"+"<<imaginary<<"i";
        cout<<"\nx2="<<real<<"-"<<imaginary<<"i";
    }
     return 0;
}
