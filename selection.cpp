#include<iostream>
using namespace std;
void selectionsort(int n,int A[50]);
int main()
{
    int n,A[50],i,j;
    cout<<"\nEnter the size of the array:";
    cin>>n;
    cout<<"\nEnter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"\nSorting array using selection sort";
    selectionsort(n,A);
    return 0;

}
 void selectionsort(int n,int A[50])
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    cout<<"\nThe sorted array is:"<<"\n";
          for(i=0;i<n;i++)
          {
           cout<<A[i]<<"\t";
          }
}
