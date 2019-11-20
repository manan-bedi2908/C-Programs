/* NITI TYAGI 
 ROLL -19522
 read array elements till a negative number is entered and calculate sum of odd elements*/

#include<iostream>
using namespace std;

int main()
{
	int A[50];

	 int sum =0,p=0;
	 cout<<"** ARRAY WILL READ VALUES  TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE THEIR SUM  **";
	cout<<endl<<"\nENTER THE VALUES IN ARRAY "<<endl;
    
    int i=0;
    cin>>A[i];

    while(A[i]>=0)
    {
    	if(A[i]%3==0)
    	{
		
       sum+=A[i];	
    	
        }
        i++;
        cin>>A[i];
        
    
    }

 cout<<sum;
  return 0;
}
   
