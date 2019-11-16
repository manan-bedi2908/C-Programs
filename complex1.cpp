#include<iostream>
#include<iomanip>
using namespace std;
void bufferClr()
{
	cin.clear();
	cin.ignore(100,'\n');
}
class Complex
{
	private:
		int real;
		int imaginary;
	public:
		Complex();
		Complex(int r);
		Complex(int r, int i);
		void input();
		friend Complex add(Complex, Complex);
		friend void display(Complex cm);
		Complex(const Complex& cm2);
		const Complex& operator++();
    	const Complex& operator++(int);
    	const Complex& operator-- ();
    	const Complex& operator-- (int);
    	int operator==(Complex cm);
    	Complex& operator= (const Complex& cm);
};
Complex::Complex()
{
	real=1;
	imaginary=1;
}
Complex::Complex(int r)
{
	real = r;
	imaginary = 1;
}
Complex::Complex(int r, int i)
{
	real = r;
	imaginary = i;
}
void Complex::input()
{
	int re,im;
    cout<<"\nEnter Real and Imaginary Part:";

        while(!(cin>>re>>im))
        {
            bufferClr();
            cout<<"Invalid input. Enter again!!";
        }
       real = re;
       imaginary = im;
}
void display(Complex cm)
{
	cout<<cm.real<<" + "<<cm.imaginary<<"i";
}
Complex::Complex(const Complex& cm2)//copy constructor
{
    real = cm2.real;
    imaginary = cm2.imaginary;
}
Complex add(Complex cm1, Complex cm2)
{
	Complex cm3;
    cm3.real = cm1.real + cm2.imaginary;
    cm3.imaginary = cm1.imaginary + cm2.imaginary;
    cout<<"\nThe Sum of Two Complex Numbers is: ";
	display(cm3);
    return cm3;
}
const Complex& Complex:: operator++ ()
{
    real+=imaginary;
    return(*this);
}
const Complex& Complex:: operator++ (int)
{
    const Complex saveObject(*this);
    real+=imaginary;
    return saveObject;
}
const Complex& Complex:: operator-- ()
{
    real-=imaginary;
    return(*this);
}
const Complex& Complex:: operator-- (int)
{
    const Complex saveObject(*this);
    real-=imaginary;
    return saveObject;
}
int Complex::operator==(Complex cm)
{
    if(real==cm.real && imaginary==cm.imaginary)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Complex& Complex::operator=(const Complex& cm)
{
    real=cm.real;
    imaginary=cm.imaginary;
    return (*this);
}
int main()
{
	cout<<"Complex Number 1:-";
            Complex cm1;
            cm1.input();
	cout<<"\t\t\tMain Menu";
	int choice;
	do
	{
		cout<<"\n1.Increment Complex"
		<<"\n2.Decrement Complex"
		<<"\n3.Test Equality with Other Complex"
		<<"\n4.Overload Assignment Operator"
		<<"\n5.Add Two Complex Numbers"
		<<"\n6.Create copy of the old Complex"
		<<"\n7.Exit";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
                {
                	cout<<"\nPre increment:";
                	cout<<"\nValue of ++cm=";display(++cm1);cout<<"  Value after increment:";display(cm1);
                	cout<<"\nPost increment:";
                	cout<<"\nValue of cm++=";display(cm1++);cout<<"  Value after increment:";display(cm1);
                	break;
                }
            case 2:
                {
                	cout<<"\nPre decrement:";
                	cout<<"\nValue of --cm=";
					display(--cm1);
					cout<<"  Value after decrement:";display(cm1);
            	    cout<<"\nPost decrement:" <<"\nValue of cm1--=";display(cm1--);cout<<"  Value after decrement:";display(cm1);
                	break;
                }
            case 3:
                {
                    cout<<"\nComplex Number 2:";
                    Complex cm2;
                    cm2.input();
                    if(cm1==cm2)
                    {
                        cout<<"\nBoth fractions are same";
                    }
                    else{cout<<"\nBoth are different";}
                    break;
                }
            case 4: 
            	{
            		cout<<"\nComplex Number 2:";
                    Complex cm2;
                    cm2.input();
                    cm1=cm2;
            		display(cm1);
            		break;
				}
			case 5:
				{
					Complex cm1,cm2,cm3;
					cm1.input();
					cm2.input();
					add (cm1,cm2);
					break;
				}
			case 6:
				{
					cout<<"\nComplex 2 as a copy of Complex 1";
                    Complex cm2(cm1);
                    cout<<"\nComplex 1=";display(cm1);
                    cout<<"\nComplex 2=";display(cm2);
                    break;
				}
		}
	}while(choice!=7);
	return 0;
}
