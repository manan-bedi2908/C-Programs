#include<iostream>
using namespace std;
int main()
{
  int i,j,k,n;
  cout<<"Enter Number Of Rows:";
  while(!(cin>>n))
  {
    cin.clear();
    cin.ignore(100,'\n');
  }
  if(n<0)
  {
    cout<<"Invalid Input!!\nEnter only positive numbers";
  }
  for(i=1;i<=n;i++)
  {
    for(k=i;k<n;k++)
    {
      cout<<" ";
    }
    for(j=1;j<=(2*i-1);j++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }
  return 0;
}
