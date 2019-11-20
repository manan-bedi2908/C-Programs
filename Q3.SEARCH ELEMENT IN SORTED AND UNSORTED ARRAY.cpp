/* NITI TYAGI 
 ROLL -19522
 SEARCH ELEMENT IN SORTED AND UNSORTED ARRAY*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int choice;
	cout<<"\n1.SEARCH OF ELEMENT IN SORTED ARRAY";
	cout<<"\n2.SEARCH OF ELEMENT IN UNSORTED ARRAY";
	cout<<"\n Enter your CHOICE =  ";
	cin>>choice;
	switch(choice)
	{
	case 1:
		{
		
	int n, x, pos, A[30], count=0;
	cout<<"\n Enter the no. of elements in array: ";
	cin>>n;
	
	 while(1)
 {    if(cin.fail())
       {cin.clear();  
       cin.ignore(100,'\n');  
    	cout<<"\n Only a number can be entered!!Enter again";
         cin>>n;}
       else 
       break;
 } 
   f:
   	if (n<=0)
	{ cout<<"\n No. of elements should be greater than 0. Enter again ";
	  cin>>n;
      goto f;	}
      
	cout<<"\n Enter the array elements(in ascending order): ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}

    cout<<"\n The array entered is: ";
    for (int i = 0; i < n; ++i)
    {
    	cout<<A[i]<<" ";
    }

	cout<<"\n Enter the element to be found: ";
	cin>>x;

	for (int i = 0; i < n; ++i)
	{  if (A[i]>x)
	{
		break;
	}

	else
	{	if (A[i]==x)
		{
			cout<<"\n Element found at index "<<i<<" and position "<<i+1;
			pos=i+1;
			count++;
		}
	}
    }

	if (count==0)
	{
		cout<<"\n Entered element isn't present in the above array";
	}

	else
    { cout<<"\n No. of comparisons made is: "<<pos;}
}
    break;
    case 2:
    	{
    		int pos, n, x, A[30], count=0, ctr;
	cout<<"\n Enter the no. of elements in array: ";
	cin>>n;
	
	 while(1)
 {    if(cin.fail())
       {cin.clear();  
       cin.ignore(100,'\n');  
    	cout<<"\n Only a number can be entered!!Enter again";
         cin>>n;}
       else 
       break;
 } 
   U:
   	if (n<=0)
	{ cout<<"\n No. of elements should be greater than 0. Enter again ";
	  cin>>n;
      goto U;	}
      
	cout<<"\n Enter the array elements: ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}

    cout<<"\n The array entered is: ";
    for (int i = 0; i < n; ++i)
    {
    	cout<<A[i]<<" ";
    }

	cout<<"\n Enter the element to be found: ";
	cin>>x;

	for (int i = 0; i < n; ++i)
	{
		if (A[i]==x)
		{
			cout<<"\n Element found at index "<<i<<" and position "<<i+1;
			count++;
			pos=i+1;
		}
	}

	if (count==0)
	{
		cout<<"\n Entered element isn't present in the above array";
	}
	else
    { cout<<"\n No. of comparisons made is: "<<pos;}
 
}
break;
default: cout<<"\n invalid entry.";
}
	return 0;
}
