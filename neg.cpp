#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
   int sum=0, i=0, flag=0, n;
   cout<<"Program to read an array till a negative value is entered and compute the sum of all the numbers "
       <<"divisible by 3\n"
       <<"Enter the upper limit that the number of array elements must not exceed:\n ";
  label:
   while(!(cin>>n))
    {
    	cout<<"\t ERROR: Enter a 'natural' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');

	}
   if (n<=0)
	{
	cout<<"\t ERROR: Enter a 'natural number"<<endl<<endl;
	goto label;
    }
    int a[n];
    cout<<"Enter array elements: "<<endl
        <<"a["<<i<<"]= ";
    while(!(cin>>a[i]))
    {
    	cout<<"\t ERROR: Enter a 'natural' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');

	}
    if(a[i]<=0)
    {
    cout<<"First number entered itself is negative\nProgram terminated"<<endl;
    exit(1);
	}
	else if (a[i]%3==0)
	sum = sum+a[i];
   while(a[i]>=0&&i<n-1)
   { ++i;
      cout<<"a["<<i<<"]= ";
      while(!(cin>>a[i]))
    {
    	cout<<"\t ERROR: Enter a 'natural' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');

	}
      if(a[i]%3==0&&a[i]>=0)
      {
      	flag=1;
	    sum = sum+a[i];
      }

   }
   if(flag==0)
   {
   	cout<<"No entry is divisible by 3"<<endl;
   	exit(1);
   }
   if(i==n-1)
   cout<<"\nMaximum limit of entries reached\n\n";
   cout<<"Numbers divisible by 3: ";
   for(int j=0; j<i+1; ++j)
   {
   	 if(a[j]%3==0&&a[j]>=0)

	    {
		cout<<a[j]<<"  ";
	    }

   }
   cout<<endl;
   cout<<"\nSum of numbers divisible by 3: "<<sum;
}
