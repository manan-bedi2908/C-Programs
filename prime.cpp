#include<iostream>
using namespace std;
int main()
{
  int num1,num2,k,i,j,flag;
  cout<<"Enter the two intervals between which prime numbers are to be found:";
  while(!(cin>>num1>>num2))
  {
      cin.clear();
      cin.ignore(100,'\n');
  }
  if(num1>num2)
  {
    k=num1;
    num1=num2;
    num2=k;
  }
  for(i=num1+1;i<num2;i++)
  {
    flag=0;
    for(j=2;j<=i/2;j++)
    {
      if(i%j==0)
      {
        flag=1;
        break;
      }
    }
    if(flag==0)
       cout<<i<<"\t";
  }
  return 0;
}
