#include<iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;
  public:
    Complex();
    Complex(int r,int i);
    Complex(const Complex &obj);
    void print();
    Complex add(Complex &c1,Complex &c2);
    void add(Complex &c2);
};

int main()
{
   int r,i;
   cout<<"Enter the real part of first complex number c1 : ";
   cin>>r;
   cout<<"Enter the imaginary part of first complex number c1 : ";
   cin>>i;
   cout<<"Complex no. 1\n";
   Complex c1(r,i);
   c1.print();
   cout<<"\nEnter the real part of second complex number c2 : ";
   cin>>r;
   cout<<"Enter the imaginary part of second complex number c2 : ";
   cin>>i;
   cout<<"Complex no. 2\n";
   Complex c2(r,i);
   c2.print();
   cout<<"\n\nAddition of complex no.1 and 2 when passed through function with two parameters\n";
   cout<<"ADDED NUMBER : ";
   Complex c3;
   c3=c3.add(c1,c2);
   c3.print();
   cout<<"\n\nAddition of complex no.1 and 2 when passed through function with one parameter\n";
   cout<<"ADDED NUMBER : ";
   c1.add(c2);
   c1.print();
   return 0;
}


Complex::Complex()
{
    real=2;
    imaginary=3;
}
Complex::Complex(int r,int i)
{
    real=r;
    imaginary=i;
}
Complex::Complex(const Complex &obj)
{
   real=obj.real;
   imaginary=obj.imaginary;
}
void Complex::print()
{
   cout<<real<<" + "<<imaginary<<"i";
   cout<<"\nReal part = "<<real;
   cout<<"\nImaginary part = "<<imaginary;
}
Complex Complex::add(Complex &c1,Complex &c2)
{
   Complex c3;
   c3.real=c1.real+c2.real;
   c3.imaginary=c1.imaginary+c2.imaginary;
   return c3;
}
void Complex::add(Complex &c2)
{
   real=real+c2.real;
   imaginary=imaginary+c2.imaginary;
}
