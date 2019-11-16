#include<iostream>
#include<stdlib.h>
using namespace std;
class figure
{
    private:
    int length,breadth;
   public:
    figure(int l,int b)
    {
        length=l;
        breadth=b;
    }
    figure(int l)
    {
        length=l;
        breadth=l;
    }
    void print();
};
    void figure::print()
    {
        cout<<"\nThe length of the figure is "<<length<<" and breadth of the figure is "<<breadth;
    }
    void Area(int l,int b)
    {
        cout<<"\nArea of the Rectangle = "<<l*b;
    }
    void Area(int s)
    {
        cout<<"\nArea of the Square = "<<s*s;
    }
    int main()
    {
        int i,j,s;
        int ch;
        cout<<"\n\t\t\t\tMAIN MENU";
        cout<<"\n1.Area of Rectangle";
        cout<<"\n2.Area of Square";
        cout<<"\nEnter your choice:";
        cin>>ch;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout<<"\nYou have entered wrong input"<<"\n";
            exit(0);
        }
    switch(ch)
    {
        case 1:
        {
            cout<<"\nEnter the length of the Rectangle:";
           cin>>i;
           cout<<"\nEnter the breadth of the Rectangle:";
           cin>>j;
           if(cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout<<"\nYou have entered wrong input"<<"\n";
                exit(0);
            }
           figure F1(i,j);
           F1.print();
           Area(i,j);
        }
           break;
case 2:
    {
        cout<<"\nEnter the side of the Square:";
        cin>>s;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout<<"\nYou have entered wrong input"<<"\n";
            exit(0);
        }
               figure F2(s);
               F2.print();
               Area(s);
    }
               break;
default:cout<<"\n\tEnter valid choice";
}
  return 0;
}
