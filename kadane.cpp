#include<iostream>
using namespace std;
int max_Sub_Array(int A[] , int size)
{
	int max_ending_here = 0;
	int max_so_far = 0;
	for(int i = 0; i<size; i++)
	{
		max_ending_here += A[i];
		if(max_ending_here < 0)
			max_ending_here = 0;
		else if(max_so_far<max_ending_here)
			max_so_far = max_ending_here;
	}
	return max_so_far;
}
int main()
{
	int n, A[100];
	cout<<"\nEnter the number of elements in the array:";
	cin>>n;
	cout<<"\nEnter the elements of the array:";
	for(int i=0; i<n;i++)
	{
		cin>>A[i];
	}
	int max = max_Sub_Array(A, n);
	cout<<"\nMaximum Contiguous Sub Array Sum(Using Kadane's Algorithm): ";
	cout<<max;
	return 0;
}
