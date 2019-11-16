#include<iostream>
using namespace std;
int main()
{
  float i,n,sum=0;
  cout<<"\nEnter the value of n:";
  while(!(cin>>n))
  {
      cin.clear();
      cin.ignore(100,'\n');
      cout<<"Invalid input";
  }
  if(n<0)
  {
      cout<<"Invalid input";
  }
  for(i=1;i<=n;i++)
  {
     if(i==1)
        cout<<i;
     else
     {
       cout<<"+"<<1/i;
    sum+=(1/i);
     }
  }
  cout<<"\nThe sum of the series is:"<<" "<<sum;
  return 0;
}
