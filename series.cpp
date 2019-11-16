#include<iostream>
using namespace std;
int main()
{
  int i,n,result=0;
  cout<<"Enter the value of n:";
  while(!(cin>>n))
  {
      cin.clear();
      cin.ignore(100,'\n');
      cout<<"Invalid input";
  }
  for(i=1;i<=n;i++)
  {
      if(i==1)
         cout<<i;
      else
      {
          if(i%2!=0)
            cout<<"+"<<i;
          else
            cout<<"-"<<i;

      }

  }
  for(i=1;i<=n;i++)
  {
      if(i%2!=0)
          result+=i;
     else
        result-=i;


  }

  cout<<"\nThe result is:"<<result;
  return 0;

}
