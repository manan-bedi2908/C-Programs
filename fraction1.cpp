#include<iostream>
#include<stdlib.h>
using namespace std;
class Fraction
{
    private:
        int numerator,denominator;
    public:
        Fraction();
        Fraction(int numer);
        Fraction(int numer, int denom);
        Fraction(const Fraction& obj);
        ~Fraction() { }
        void store(int numer, int denom);
        void print();
};
Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}
Fraction::Fraction(int numen)
{
    numerator = numen;
    denominator = 1;
}
Fraction::Fraction(int numer, int denom)
{
    if(denom == 0)
    {
        cout<<"Error: Denominator is zero!!";
        exit(100);
    }
    numerator = numer;
    denominator = denom;
}
Fraction:: Fraction(const Fraction& obj)
{
    numerator = obj.numerator;
    denominator = obj.denominator;
}
void Fraction:: store(int numer, int denom)
{
    *this = Fraction(numer, denom);
    return ;
}
void Fraction:: print()
{
    cout<<numerator<<"/"<<denominator;
    return;
}
int main()
{
    Fraction fr1;
    cout<<"fr1 contains: ";
    fr1.print();
    cout<<endl;
    Fraction fr2(4);
    cout<<"fr2 contains: ";
    fr2.print();
    cout<<endl;
    Fraction fr3(5, 8);
    cout<<"fr3 contains: ";
    fr3.print();
    cout<<endl;
    Fraction fr4;
    cout<<"fr4 contains:";
    fr4.store(4, -8);
    fr4.print();
    cout<<endl;
    return 0;
}
