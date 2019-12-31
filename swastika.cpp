#include<iostream>
using namespace std;
void swastika(int num);
int main()
{
	int N;
	cout<<"\nEnter value of N(>=5)";
	cin>>N;
	swastika(N);
	return 0;
}
void swastika(int N)
{
	int row = N;
	int col = N;
	for(int i = 0; i<row; i++)
	{
		for(int j = 0;j<col; j++)
		{
			if(i<row/2)
			{
				if(j<col/2)
				{
					if(j==0)
						cout<<"*";
					else
						cout<<" "<<" ";
				}
				else if(j == col/2)
					cout<<" *";
				else
				{
					if(i==0)
						cout<<" *";
				}
			}
			else if(i == row/2)
				cout<<"* ";
			else 
			{
				if(j == col/2 || j == col-1)
					cout<<"* ";
				else if(i==row-1) {
					if(j <= col/2 || j == col-1)
						cout<<"* ";
					else
						cout<<" "<<" ";
				}
				else
					cout<<" "<<" ";
			}
		}
		cout<<"\n";
	}
}
