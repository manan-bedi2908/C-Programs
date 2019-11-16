#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;
int n;
void inp(int &x);
void ev_od(float[], int);
void s_a(float[], int);
void remove_dupli(float[], int);
void reverse(float[], int);
void ma_mi(float[], int);
void re_ent(float[], int&);
main()
{
  int i, k, l, m;


  cout<<"Menu-driven program that perform the following operations\n"
      <<"1. Store the even-valued elements and odd-valued elements in two separated arrays\n"
      <<"2. Calculating/Printing the sum and average of the elements of array\n"
      <<"3. Removing the duplicates from the array\n"
      <<"4. Reversing the array\n"
      <<"5. Max/Min number of an array\n"
      <<"6. Re-enter an array\n"
      <<"7. Quit\n\n\n\n";

  cout<<"Enter the number of elements of an array"<<endl;
  inp(m); //m=number of elements in an array
	float a[m];
	cout<<"Enter array elements"<<endl;
	for(i=0; i<m; ++i)
	{
		while(!(cin>>a[i]))
    {
    	cout<<"\t ERROR: Enter a 'real' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');
	}
    } //Enter the elements of the array
    cout<<"\nArray elements:\n";
    for(int i=0; i<m;++i)
    {
    	cout<<"a["<<i<<"]= "<<a[i]<<endl;
	}

  cout<<"\nEnter the choice to execute one of the following programs:\n"
      <<"1. Store the even-valued elements and odd-valued elements in two separated arrays\n"
      <<"2. Calculating/Printing the sum and average of the elements of array\n"
      <<"3. Removing the duplicates from the array\n"
      <<"4. Reversing the array\n"
      <<"5. Max/Min number of an array\n"
      <<"6. Re-enter an array\n"
      <<"7. Quit\n";


   inp(n);
   switch (n)
   {
   	case 1: ev_od(a, m);
   	        break;
    case 2: s_a(a, m);
            break;
    case 3: remove_dupli(a,m);
            break;
    case 4: reverse(a, m);
            break;
    case 5: ma_mi(a, m);
            break;
    case 6: re_ent(a, m);
            break;
    case 7: cout<<"Program terminated"<<endl;
	        exit(1) ;

   }
   getch();
   return 0;
}



void inp(int &x)
{
	while(!(cin>>x))
    {
    	cout<<"\t ERROR: Enter a 'natural' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');
	}
	return;
}
void ev_od(float x[], int y )
{
	int i,j,k, even[y], odd[y];
	for(i=0, j=0, k=0; i<y; ++i)
	{
		if(remainder(x[i],2)==0)
		{
			even[j]=x[i];
			++j;
		}
		else if(remainder(x[i],2)==1)
		{
			odd[k]=x[i];
			++k;
		}
	}
	cout<<"\nEven number elements are:\n";
	for(i=0; i<j; ++i)
	{
		cout<<even[i]<<" ";
	}
	cout<<endl;
	cout<<"\nOdd number elements are:\n";
	for(i=0; i<k; ++i)
	{
		cout<<odd[i]<<" ";
	}
	return;

}

void s_a(float x[], int y)
{
	float sum=0, avg;
	for(int i=0; i<y; ++i)
	{
		sum += x[i];
	}
	avg = sum/y;
	cout<<"Sum= "<<sum<<endl<<"Average= "<<avg<<endl;
	return;

}
void remove_dupli(float x[], int y)
{
	for(int i=0;i<y;i++)
    {
        for(int j=i+1;j<y;)
        {
            if(x[i]==x[j])
            {
                for(int k=j;k<y-1;k++)
                    x[k]=x[k+1];
                --y;
            }
            else
                ++j;
        }
    }
	cout<<"\nArray after removing redundant elements: "<<endl;
	for(int i=0; i<y; ++i)
	{
		cout<<x[i]<<" ";
	}
}
void ma_mi(float x[],int y)
{
	int max=x[0], min=x[0];
	for(int i=1; i<y; ++i)
	{
		if(x[i]>max)
		max=x[i];
		if (x[i]<min)
		min=x[i];
	}
	cout<<"Maximum value: "<<max;
	cout<<"Minimum value: "<<min;
}
void reverse(float x[], int y)
{
	int i, j, temp;
	for(i=0, j=y-1; i<y/2; ++i, --j)
	{
		temp = x[i];
		x[i]=x[j];
		x[j]=temp;
	}
	cout<<"Reverse array: "<<endl;
	for (i=0; i<y; ++i)
	{
		cout<<"a["<<i<<"]= "<<x[i]<<endl;
	}
	return;
}

void re_ent(float x[], int&y)
{
	int i, n1;
	cout<<"Enter the number of elements of an array"<<endl;
    cin>>n1; //m=number of elements in an array
	for(i=0; i<n1; ++i)
	{
		while(!(cin>>x[i]))
    {
    	cout<<"\t ERROR: Enter a 'real' number"<<endl<<endl;
    	cin.clear();
    	cin.ignore(12345678,'\n');
	}
    } //Enter the elements of the array
    y=n1;
    cout<<"New array: "<<endl;
    for(i=0; i<y; ++i)
    {
    	cout<<"a["<<i<<"]= "<<x[i];
	}
   return;
}

