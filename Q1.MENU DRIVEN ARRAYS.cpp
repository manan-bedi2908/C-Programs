/* NITI TYAGI 
 ROLL -19522
 MENU DRIVEN TO PERFORM ACTIONS ON ARRAY*/


#include <iostream>
#include <stdlib.h>

using namespace std;

void ev_odd(int arr[], int n)
{  int B[20],C[20],k=0, m=0;

  for (int i = 0; i < n; ++i)
{
  if(arr[i]%2==0)
    {B[k]=arr[i];
     k++;}
  else
    {C[m]=arr[i];
     m++;}

}
  
  cout<<"\n Array of even elements is: ";
   for (int i = 0; i < k; ++i)
     {
      cout<<B[i]<<" ";
     }  

  cout<<"\n Array of odd elements is: ";
   for (int i = 0; i < m; ++i)
     {
      cout<<C[i]<<" ";
     }     
    }

void s_av(int arr[], int size)
{ 
float sum=0;
 float average=0.0;
  for (int i = 0; i < size; ++i)
  {
    sum+=arr[i];
  }
 cout<<"\n Sum of array elements is: "<<sum;
 average=(float)sum/size;
 cout<<"\n Average of array elements is: "<<average; }

void max_min(int arr[], int size)
{ int max, min;
  max=arr[0];
  min=arr[0];
  for (int i = 1; i < size; ++i)
  { if (arr[i]>max)
    max=arr[i];
    }

 for (int i = 1; i < size; ++i)
  { if (arr[i]<min)
    min=arr[i];
    }   
  cout<<"\n Maximum no. in the array is: "<<max;
  cout<<"\n Minimum no. in the array is: "<<min;  }

  void duplicate(int arr[], int size)
  {int i, j, k;
    for ( i = 0; i < size; ++i)
      {for (j=i+1; j<size; ++j)
        {
        if (arr[i]==arr[j])
          
               { for ( k = j; k < size; ++k)
                    arr[j]=arr[j+1];
         
                 size--;
               } 
          }
      
       }
 cout<<"\n The required array (without duplicates) is: ";
  for (int i = 0; i < size; ++i)
  {
    cout<<arr[i]<<" ";
  }}


void Reverse(int arr[], int size)
{int i, j;
  for (i = 0,j=size-1; i < size/2; ++i,--j)
  {
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
  cout<<"\n The reversed array is: ";
   for(i = 0; i < size; ++i)
   {
    cout<<arr[i]<<" ";
   }}

int main(int argc, char const *argv[])
{
  int A[20], n, c;
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
      goto f; }
  
  cout<<"\n Enter array elements: ";
   for (int i = 0; i < n; ++i)
   {
    cin>>A[i];
   }

  cout<<"\n The array entered is: ";
  for (int i = 0; i < n; ++i)
  {
    cout<<A[i]<<" ";
  }

   cout<<"\n Choose an option from the menu below: ";
   cout<<"\n 1. Store even and odd elements in separate arrays";
   cout<<"\n 2. Find sum and average of array elements";
   cout<<"\n 3. Find maximum and minimum element of an array";
   cout<<"\n 4. Remove duplicate elements from array";
   cout<<"\n 5. Reverse the array elements";
   cout<<"\n 6. Re-enter the array";
     cout<<"\n 7. Exit program";

     cin>>c;
     switch(c)
     { case 1: ev_odd(A, n);
                break;

       case 2: s_av(A, n);
            break;       

       case 3: max_min(A, n);
            break;

       case 4: duplicate(A, n);
            break;  

       case 5: Reverse(A, n);
            break;          
       case 6: goto f;
               break;

       case 7: exit(0);
        
       default: cout<<"\n Wrong choice!!!";
           break;
       }
  
    return 0;
}


