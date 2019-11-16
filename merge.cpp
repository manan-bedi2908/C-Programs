#include<iostream>
using namespace std;
void merge (int x[], int p, int y[], int q, int z[], int&o);
void inp(int x[], int y);
void display(int x[], int y);

main()
{
	int f, s, n;
	cout<<"Program to merge two arrays\n\nEnter the number of elements of first array"<<endl;
	label1:
	while(!(cin>>f))
    {
    	cout<<"\t ERROR: Enter a 'natural' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');

	}
	if (f<=0)
	{
	cout<<"\t ERROR: Enter a 'natural number"<<endl<<endl;
	goto label1;
    }
    cout<<"Enter the number of elements of second array"<<endl;
    label2:
	while(!(cin>>s))
    {
    	cout<<"\t ERROR: Enter a 'natural' number"<<endl<<endl;
    	cin.clear();              // clears the state error flag
    	cin.ignore(12345678,'\n');// discards values from input buffer upto the value
		                          // equals to the first paramter
	}
	if (s<=0)
	{
	cout<<"\t ERROR: Enter a 'natural number"<<endl<<endl;
	goto label2;
    }
    int arr1[f], arr2[s], comb[f+s], num;
    cout<<"Enter the elements of first array:\n";
    inp(arr1, f); cout<<endl<<endl;
    cout<<"Enter the elements of second array\n";
    inp(arr2, s); cout<<endl<<endl;
    cout<<"Elements of the array 1:"<<endl;
    display(arr1,f); cout<<endl<<endl;
    cout<<"Elements of the array 2:"<<endl;
    display(arr2,s); cout<<endl<<endl;
    cout<<"Merging both the arrays\n";
    merge(arr1, f, arr2, s, comb, num );
    cout<<"Elements of the merged array:"<<endl;
    display(comb, num);

}

void merge (int x[], int p, int y[], int q, int z[], int&o)

{
	int i=0, j=0, k=0;
	while(i<p && j<=q)
	{
		if(x[i]<y[j])
		{
		z[k]=x[i];
		 ++i;
	    }
		else
		{
		z[k]=y[j];
		 ++j;
	    }
	    ++k;
	}

		while (i<p)
		{
			z[k]=x[i];
			++k; ++i;
		}
		while (j<q)
		{
			z[k]=y[j];
			++j; ++k;
		}

		o=p+q;
		cout<<"\n arrays merged!!!";
}


void inp(int x[], int y)
{
	for(int i=0;i<y;++i)
	{
		cout<<"Element "<<i+1<<": ";
		cin>>x[i];
	}
	return;
}

void display(int x[], int y)
{

	for(int i=0; i<y; ++i)
	{
		cout<<"Element "<<i+1<<": "<<x[i]<<endl;
	}
}
