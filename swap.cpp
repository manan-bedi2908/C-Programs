#include<iostream>
using namespace std;
int swap(int*px, int*py);
int main()
{
    int x, y;
    cout<<"\nEnter The First number:";
    cin>>x;
    cout<<"\nEnter the second number:";
    cin>>y;
    swap(&x,&y);
    cout<<"\nAfter Swapping:";
    cout<<"\nx= "<<x;
    cout<<"\ny= "<<y;
    return 0;
}
  int swap(int*px, int*py)
{
    int temp = *px;
    *px      = *py;
    *py      = temp;
    return 0;
}
