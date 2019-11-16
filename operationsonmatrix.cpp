#include<iostream>
#include<stdlib.h>h
using namespace std;
class Matrix
{
    private:
    int A[10][10],B[10][10],C[10][10],D[10][10],E[10][10],F[10][10],x,y,i,j,z,w,k;
    public:
    void enter();
    void value();
    void sum();
    void difference();
    void product();
    void transpose();
};
void Matrix::enter()
{
    cout<<"\nEnter the number of rows:";
    cin>>x;
    cout<<"\nEnter the number of columns:";
    cin>>y;
    cout<<"\nEnter the number of rows:";
    cin>>z;
    cout<<"\nEnter the number of columns:";
    cin>>w;
     if(x!=z || y!=w)
    {
        cout<<"\nInvalid input";
        exit(20);
    }
    cout<<"\nEnter the elements of the first matrix:";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"\nEnter the elements of the second matrix:";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>C[i][j];
        }
    }
}
void Matrix::sum()
{
    cout<<"\nMatrix 1 entered is:"<<"\n";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nMatrix 2 entered is:"<<"\n";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nSum of matrix 1 and 2 is:";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            E[i][j]=A[i][j]+C[i][j];
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<E[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Matrix::difference()
{

    cout<<"\nMatrix 1 entered is:"<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nMatrix 2 entered is:"<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nDifference of matrix 1 and 2 is:";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            D[i][j]=A[i][j]-C[i][j];
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Matrix::product()
{

    cout<<"\nMatrix 1 entered is:"<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nMatrix 2 entered is:"<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<x;i++)
  {
      for(j=0;j<y;j++)
      {
          B[i][j]=0;
          for(k=0;k<y;k++)
          {
              B[i][j]+=A[i][k]*C[k][j];

          }
      }
  }
  cout<<"\nProduct of two matrices is:";
  for(i=0;i<x;i++)
  {
      for(j=0;j<y;j++)
      {
          cout<<B[i][j]<<" ";
      }
      cout<<endl;
  }
}
void Matrix::value()
{
    cout<<"\nEnter the number of rows:";
    cin>>x;
    cout<<"\nEnter the number of columns:";
    cin>>y;
     cout<<"\nEnter the elements of the matrix:";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>A[i][j];
        }
    }
}
void Matrix::transpose()
{
   cout<<"\nMatrix entered is:"<<endl;
   for(i=0;i<x;i++)
   {
       for(j=0;j<y;j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<"\nTranspose of the matrix is:"<<endl;
   for(i=0;i<y;i++)
   {
       for(j=0;j<x;j++)
       {
           cout<<A[j][i]<<" ";
       }
       cout<<endl;
   }
}
int main()
{
    Matrix M;
    int ch;
    do
    {
        cout<<"=====================";
        cout<<"\nMAIN MENU";
        cout<<"\n=====================";
        cout<<"\n\n1.Add Two Matrices"<<"\n2.Subtract Two Matrices"<<"\n3.Product of Two Matrices"<<"\n4.Transpose of the matrix:"<<"\n5.Exit"<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
            case 1: M.enter();
                    M.sum();
                    break;
            case 2: M.enter();
                    M.difference();
                    break;
            case 3: M.enter();
                    M.product();
                    break;
            case 4: M.value();
                    M.transpose();
                    break;
        }
    }while(ch!=5);
    return 0;
}

