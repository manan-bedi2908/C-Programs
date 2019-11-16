//Viraj Jayant
//19523
//CLASS FRACTION HAVING CONSTRUCTORS WITH NO PARAMETER, ONE AND TWO PARAMETERS AND A COPY CONSTRUCTOR AND DEFINE OBJECTS TO ILLUSTRATE THEIR USE, AN ACCESSOR FUNCTION PRINT

#include <iostream>

using namespace std;

class fraction
{  
   private:
   
   int num, den;
   float res;
   
   public:
   
    fraction();
    fraction(int n);
    fraction(int,int);
   	fraction(fraction &fr);
   	void print();
    fraction add( fraction ob1, fraction ob2);
    void add1(fraction ob);
    int NUM()
    {
    	return num;
	}
	int DEN()
	{
		return den;
	}
	float RES()
	{
		return res;
	}
}; 
fraction::fraction()
   { num=0;
     den=1; res=0;
   }

fraction::fraction(int n)
   { num=n;
     den=1; res=0;}  

fraction::fraction(int n, int d)
   { num=n;
    den=d;res=0;} 

fraction::fraction(fraction &fr)
   	{ num=fr.num;
   	  den=fr.den;
   	  res=fr.res;}

void fraction::print()
   	{  if (num==0 && den!=0)
   	    cout<<"\nThe value of fraction entered is: 0";
       	else if(den==0)
   		cout<<"\n The value of fraction entered is: NOT DEFINED"; 
        else
   		cout<<"\n The fraction entered is: "<<num<<"/"<<den<<"="<<(float)num/den;
	}
     
fraction fraction::add( fraction ob1, fraction ob2)
    { fraction ob3;
      float f1=(float)ob1.num/(float)ob1.den; 
      float f2=(float)ob2.num/(float)ob2.den;
      ob3.res=f1+f2;
      return ob3; }

void fraction::add1(fraction ob)
    {
      res=(float)num/(float)den;
      res+=ob.res; }   

main()
{   
	int n,d;
	fraction obj;
	cout<<"\nProgram to illustrate the implementation of constructors\nOutput for default constructor";
	obj.print();
	cout<<"\nEnter the numerator: ";
	cin>>n;
	cout<<"\n Output of parametrized constructor (one parameter)";
	fraction obj1(n);
	obj1.print();
	cout<<"\n Numerator of the fraction is: "<<n;
	cout<<"\nEnter the denominator of the fraction: ";
	cin>>d;
	cout<<"\n Output of constructor with two parameters";
	fraction obj2(n,d);
	fraction obj3(obj2);
	obj2.print();
	cout<<"\n Output of copy constructor: Previous object is parameter";
	obj3.print();
	
	fraction obj4, A;
	obj4= A.add(obj1, obj3);
	cout<<"\n The sum of "<<obj1.NUM()<<"/"<<obj1.DEN()<<" and "<<obj3.NUM()<<"/"<<obj3.DEN()<<" is: "<<obj4.RES();
	fraction obj5, obj6;
	obj6=obj5;
	obj5.add1(obj4);
	float result=obj6.RES()+obj4.RES();
	cout<<"\n The sum of "<<obj6.RES()<<" and "<<obj4.RES()<<" is: "<<result;
 
}

