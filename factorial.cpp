#include<iostream>
using namespace std;
int main()
{
  int n,i,f=1;
  cout<<"Enter number till which facettorials are to be computed:";
  cin>>n;
  if(n>0)
  {
   for(i=1;i<=n;i++)
   {
    f*=i;
    cout<<"Factorial of"<<" "<<i<<" "<<"is"<<" "<<f<<endl;
   }
  }
  else
  {
    cout<<"Invalid input";
  }
  return 0;
}
