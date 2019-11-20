/* NITI TYAGI 
 ROLL -19522
 merge two arrays to get an ordered array*/

#include<iostream>
using namespace std;

void merge(int a1[],int a2[],int n1,int n2);

int main()
{
  
  int i=0,a1[10],a2[10],n1,n2;
  cout<<"Enter the no. of elements of first array : ";
  cin>>n1;
  while(1)
    {
      if(cin.fail())
      {
	cin.clear();
	cin.ignore(100,'\n');
	cout<<"You have entered wrong input"<<endl;
	cout<<"Enter it again : ";
	cin>>n1;
      }
      else
	break;
    }
    cout<<"Enter the no. of elements of second array : ";
  cin>>n2;
  while(1)
    {
      if(cin.fail())
      {
	cin.clear();
	cin.ignore(100,'\n');
	cout<<"You have entered wrong input"<<endl;
	cout<<"Enter it again : ";
	cin>>n2;
      }
      else
	break;
    }
  if(n1>0 && n2>0 && n1<=10 && n2<=10)
  {
   cout<<"Enter the elements of the first array : \n";
   for(i=0;i<n1;i++)
   {
      cout<<"a1["<<i<<"]= ";
      cin>>a1[i];
   }
   cout<<"Enter the elements of the second array : \n";
   for(i=0;i<n2;i++)
   {
      cout<<"a2["<<i<<"]= ";
      cin>>a2[i];
   }
   cout<<"MERGED ARRAY ";
   cout<<endl;
   merge(a1,a2,n1,n2);
  }
  else
    cout<<"INVALID INPUT\n***** N1 and N2 should greater than 0 and smaller than equal to 10 ***** ";
   return 0;
}
//function to merge the ordered arrays
void merge(int a1[],int a2[],int n1,int n2)
{
   int a3[20],i=0,j=0,k=0;
   while(i<n1 && j<n2)
   {
     if(a1[i]<a2[j])
     {
      a3[k]=a1[i];
      i++;
     }
     else
     {
       a3[k]=a2[j];
       j++;
     }
     k++;
   }
   if(i>=n1)
   {
      while(j<n2)
      {
	a3[k]=a2[j];
	j++;
	k++;
      }
   }
   if(j>=n2)
   {
     while(i<n1)
     {
       a3[k]=a1[i];
       i++;
       k++;
     }
   }
   for(int l=0;l<n1+n2;l++)
   {
      cout<<a3[l]<<"  ";
   }
}



