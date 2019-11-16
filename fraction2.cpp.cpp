#include<iostream>
#include<iomanip>
using namespace std;
void bufferClr()
{
	cin.clear();
	cin.ignore(100,'\n');
}
void drawline()
{
    cout<<"\n"<<setfill('-')<<setw(80)<<"-";
    cout<<setfill(' ');
}
int gcd(int a, int b)
{
	int gcd=1;
	for(int i=1;(i<=a && i<=b);i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    return gcd;
}
class Fraction
{
private:
    int numerator;
    int denominator;
public:

    void reduce()
    {
        int f=gcd(numerator,denominator);
        numerator/=f;
        denominator/=f;
    }
    Fraction()
    {
        numerator=0;
        denominator=1;
    }
    Fraction(int num,int den)
    {
        numerator=num;
        denominator=den;
        reduce();
    }
	void input_fr()
	{
		int n,d;
        cout<<"\nEnter numerator and denominator:";

        while(!(cin>>n>>d) || d==0)
        {
            bufferClr();
            cout<<"Invalid input. Enter again(Make sure denominator is not 0):";
        }
        numerator=n;
        denominator=d;
	}
	void increment()
    {
        numerator+=denominator;
        reduce();
    }
	friend Fraction add(Fraction, Fraction);
	friend void display(Fraction fr);
	Fraction(const Fraction& fr2);
	const Fraction& operator++();
    const Fraction& operator++(int);
    const Fraction& operator-- ();
    const Fraction& operator-- (int);
    int operator==(Fraction fr);
    Fraction& operator= (const Fraction& fr);
};
void display(Fraction fr)
{
        cout<<" "<<fr.numerator<<"/"<<fr.denominator<<" ";
}
Fraction::Fraction(const Fraction& fr2)//copy constructor
{
    numerator=fr2.numerator;
    denominator=fr2.denominator;
}
Fraction add(Fraction fr1, Fraction fr2)
{
	Fraction fr3;
    fr3.numerator=(fr1.numerator*fr2.denominator)+(fr1.denominator*fr2.numerator);
    fr3.denominator=fr1.denominator*fr2.denominator;
	fr3.reduce();
	display(fr3);
    return fr3;
}
const Fraction& Fraction:: operator++ ()
{
    numerator+=denominator;
    reduce();
    return(*this);
}
const Fraction& Fraction:: operator++ (int)
{
    const Fraction saveObject(*this);
    numerator+=denominator;
    reduce();
    return saveObject;
}
const Fraction& Fraction:: operator-- ()
{
    numerator-=denominator;
    reduce();
    return(*this);
}
const Fraction& Fraction:: operator-- (int)
{
    const Fraction saveObject(*this);
    numerator-=denominator;
    reduce();
    return saveObject;
}
int Fraction::operator==(Fraction fr)
{
    reduce();
    fr.reduce();
    if(numerator==fr.numerator && denominator==fr.denominator)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Fraction& Fraction::operator=(const Fraction& fr)
{
    numerator=fr.numerator;
    denominator=fr.denominator;
    return*this;
}
int main()
{
    drawline();
    cout<<"\t\t\t  *** F R A C T I O N  C L A S S ***";
    drawline();
    int exit=0;
    while(exit==0)
    {

        cout<<"\n\t\t->Enter 1 to exit."
            <<"\n\t\t->Enter 2 to continue"
            <<"\n\t\t  ENTER YOU CHOICE:";

        int ans;
        while(!(cin>>ans) || (ans!=1 && ans!=2))
        {
            bufferClr();
            cout<<"\nInvalid Input.Enter Again:";
        }
        if(ans==1)
            exit=1;
        else
        {
        	drawline();
        	cout<<"Fraction 1:-";
            Fraction fr1;
            fr1.input_fr();
            cout<<"\n\t\t\t-----MENU-----"

                <<"\n\t1->Decrement Fraction"
                <<"\n\t2->Increment Fraction"
                <<"\n\t3->Test equality with other fraction"
                <<"\n\t4->Overload Assignment Operator"
                <<"\n\t5->Add Two Fractions"
                <<"\n\t6->Create copy of the old fraction"
                <<"\nEnter your choice(1-6)";
            int choice;
            while(!(cin>>choice) || (choice<1 || choice>6) )
            {
                bufferClr();
                cout<<"\nInvalid Input. Enter again:";
            }
            switch(choice)
            {

            case 1:
                {
                cout<<"\nPre decrement:";
                cout<<"\nValue of --fr=";
				display(--fr1);
				cout<<"  Value after decrement:";display(fr1);
                cout<<"\nPost decrement:" <<"\nValue of fr--=";display(fr1--);cout<<"  Value after decrement:";display(fr1);
                break;
                }
            case 2:
                {
                cout<<"\nPre increment:";
                cout<<"\nValue of ++fr=";display(++fr1);cout<<"  Value after increment:";display(fr1);
                cout<<"\nPost increment:"
                    <<"\nValue of fr++=";display(fr1++);cout<<"  Value after increment:";display(fr1);
                break;
                }
            case 3:
                {
                    cout<<"\nFraction 2:";
                    Fraction fr2;
                    fr2.input_fr();
                    if(fr1==fr2)
                    {
                        cout<<"\nBoth fractions are same";
                    }
                    else{cout<<"\nBoth are different";}
                    break;
                }
            case 4: 
            	{
            		cout<<"\nFraction 2:";
                    Fraction fr2;
                    fr2.input_fr();
                    fr1=fr2;
            		display(fr1);
            		break;
				}
			case 5:
				{
					Fraction fr1,fr2,fr3;
					fr1.input_fr();
					fr2.input_fr();
					add (fr1,fr2);
					break;
				}
			case 6:
				{
					cout<<"\nFraction 2 as a copy of fraction 1";
                    Fraction fr2(fr1);
                    cout<<"\nFraction 1=";display(fr1);
                    cout<<"\nFraction 2=";display(fr2);
                    break;
				}
			}		
		}
	}
	return 0;
}
