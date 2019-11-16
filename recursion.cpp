#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n * fact(n-1));
}
int fib(int range,int a,int b)
{
    cout<<a<<" ";
    if(range==0)
        return a+b;
    else
        fib(range-1,b,a+b);
}
int gcd(int num1,int num2)
{
    return(num2!=0)?gcd(num2,num1%num2):num1;
}
int reverse(int num)
{
    if(num<10)
        return num;
    else
    {
        cout<<num%10;
        return reverse(num/10);
    }
}
int main()
{
    int ch;
    do
    {
        cout<<"\t\t\t\t\t\tMAIN MENU"<<"\n1.Calculate Factorial"<<"\n2.Generate Fibonacci series"<<"\n3.Compute GCD of two numbers"<<"\n4.Reverse the digits"<<"\n5..Exit";
        cout<<"\nEnter Your Choice:";
        while(!(cin>>ch))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"\nChoice entered is incorrect";
        }
        switch(ch)
        {
            case 1: int n;
                    cout<<"\nEnter the number whose factorial is to be found";
                    while(!(cin>>n))
                    {
                        cin.clear();
                        cin.ignore(100,'\n');
                        cout<<"\nInvalid Input";
                    }
                    cout<<"\nFactorial of "<<n<<" = "<<fact(n)<<"\n";
                    break;
            case 2: int range,a,b;
                    cout<<"\nEnter the range:";
                    cin>>range;
                    cout<<"\nEnter the first term of the fibonacci series:";
                    cin>>a;
                    cout<<"\nEnter the second term of the fibonacci series:";
                    cin>>b;
                    cout<<"\nFibonacci series:"<<endl;
                    fib(range,a,b);
                    cout<<"\n";
                    break;
            case 3: int num1,num2,result;
                    cout<<"\nEnter Number 1: ";
                    cin>>num1;
                    cout<<"\nEnter Number 2: ";
                    cin>>num2;
                    result=gcd(num1,num2);
                    if(gcd)
                        cout<<"\nThe GCD of "<<num1<<" and "<<num2<<" = "<<result<<endl;
                    else
                        cout<<"\nInvalid input!!!";
                    break;
            case 4: int num;
                    cout<<"\nEnter the number:";
                    cin>>num;
                    cout<<"\nReverse of "<<num<<" = ";
                    cout<<reverse(num);
                    break;
        }
    }while(ch!=5);
    return 0;
}
