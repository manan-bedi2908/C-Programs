/* NITI TYAGI 
 ROLL -19522
 sum of elements of array at odd indexes*/

#include<iostream>
using namespace std;

int main()
{
	int A[50];
	int n;
	cout<< "\n\nENTER THE NO. OF ELEMENTS TO BE ENTERED IN AN ARRAY = ";
	cin>>n;
	while(!cin>>n)
	{
		cin.clear();
		cout<<"Invalid entry..";
		
		cin.ignore(100,'\n');
     }
     if(n<=0)
     cout<<"INVALID ENTRY..";
    else
    {
	 int sum =0;
	cout<<endl<<"ENTER THE VALUES IN ARRAY "<<endl;
	for(int i=0;i<n;i++)
   {
		cin>>A[i];
	while(!cin>>A[i])
	{
		cin.clear();
		cout<<"Invalid entry..";
		cin.ignore(100,'\n');
	}
    }
    cout<<"\n ELEMENTS ON ODD INDEX ARE:= ";
	for(int i=0;i<n;i++)
	{
		
		if(i%2!=0)
		{   
		  	cout<<" "<<A[i]<<" ";
		  	sum+=A[i];
		
		}
	}
	 cout<<"\n\n SUM OF ODD INDEX ELEMENTS IS  = "<<sum;
}
  return 0;
}
