#include<iostream>
using namespace std;
int linear_search(float[],int, float);
int binary_search(float[],int, float);
int m;
main()
{
	int n,b,c, v;
	cout<<"Program to perform linear search (in both sorted and unsorted arrays) and binary search\n\n"
	    <<"Enter the number of elements of the array\n"<<endl;
	while(!(cin>>n))
    {
    	cout<<"\t ERROR: Enter a 'natural' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');
	}
	float a[n];
	cout<<"Enter the choice that tells the order of the list"<<endl
	    <<"1. Unsorted\n2. Sorted[Asc]\n3. Sorted[Desc]\n";

	while(!(cin>>m))
    {
    	cout<<"\t ERROR: Enter a 'natural' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');
	}

	cout<<"Enter the elements of array:\n";
	for(int i=0; i<n; ++i)
	{
		while(!(cin>>a[i]))
    {
    	cout<<"\t ERROR: Enter a 'real' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');
	}
}
    for(int i=0; i<n; ++i)
	{
		cout<<"Array element "<<i+1<<": "<<a[i]<<endl;
	}
	cout<<"Enter the element to be searched"<<endl;
	cin>>v;
	b=linear_search(a, n, v);
	if(m==2||m==3)
	c=binary_search(a, n, v);

	cout<<"Number of comparisons in linear search: "<<b<<endl;
	if(m==2||m==3)
	cout<<"Number of comparisons in binary search: "<<c;

}

int linear_search(float x[], int y, float val )
{
	int temp=0, location, count=0;

	switch(m)
	{
		case 1: for(int i=0; i<y; ++i)
		        {
		        	if(val==x[i])
		        	{
		        		temp=1;
		        		location=i;
					}
					++count;
				}
				break;
	    case 2: for(int i=0;x[i]<=val; ++i)
	            {
	    	        if(val==x[i])
	    	        {
	    	        	temp=1;
	    	        	location=i;
	    	        	break;
					}
					++count;
	        	}
	        	break;

	    case 3: for(int i=0;x[i]>=val; ++i)
	            {
	    	        if(val==x[i])
	    	        {
	    	        	temp=1;
	    	        	location=i;
	    	        	break;
					}
					++count;
		        }
		        break;
	    default: cout<<"INVVALID ENTRY!!!\n"<<endl;
	}
	if (temp==0)
	{
		cout<<"Element not found"<<endl;
		return 1;
	}
	else
	cout<<"Location (index) of the element "<<val<<": "<<location<<endl;
	return (count);
}
int binary_search(float x[], int y, float val)
{
	int low=0, mid, high=y-1;
	int count=0, flag=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(val==x[mid])
		{
			flag=mid;
			++count;
			break;
		}
		else if(val>x[mid])
		low=mid+1;
		else
		high=mid-1;
		++count;
	}
	if(flag==0)
	return 1;
	return (count);
}
