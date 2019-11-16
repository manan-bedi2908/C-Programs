#include<iostream>
using namespace std;
main()
{

  int n,sum=0;
  cout<<"Program to compute the sum of the values at odd indices\n\nEnter the number elements of the array: ";
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
    for(int i=0; i<n; ++i)
    {
       cout<<"a["<<i<<"] = ";
       while(!(cin>>a[i]))
    {
    	cout<<"\t ERROR: Enter a 'natural' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');

	}
       if(i%2!=0)
	      sum += a[i];
    }

    for(int i=0; i<n; ++i)
	{
		cout<<"Array element "<<i+1<<": "<<a[i]<<endl;
	}
	cout<<endl;
	cout<<"Values at odd indices: "<<endl;
	if(n>=2)
	cout<<a[1];
	for(int i=2; i<n; ++i)
	{
		if(i%2==1)
	    {
		cout<<" , "<<a[i];
	    }

	}
    cout<<"\nSUM = "<<sum;



}
