#include<iostream>
#include<cstdlib>
using namespace std;
double divide(double quot, double dvsr);
int main()
{
    double dividend,divisor;
    cout<<"\nEnter the dividend:";
    cin>>dividend;
    cout<<"\nEnter the divisor:";
    cin>>divisor;
    try
    {
        double quotient = divide(dividend, divisor);
        cout<<"\nQuotient is: "<<quotient<<endl;
    }
    catch(double& error)
    {
        cout<<"**Error 100: divisor 0\n";
        exit(100);
    }
    cout<<"\nEnd of Exception handling!!";
    return 0;
}
double divide(double dvnd, double dvsr)
{
    if(dvsr == 0)
        throw dvsr;
    return dvnd/dvsr;
}
