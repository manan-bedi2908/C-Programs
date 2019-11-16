#include<iostream>
using namespace std;
 int n1,n2,m1,m2,A[20][20], B[20][20],ch, i,j,k,C[20][20];;

  void input()
{
  cout<<"\nEnter the first matrix:";
  for(i=0;i<n1;i++)
  {
      for(j=0;j<m1;j++)
      {
          cin>>A[i][j];
      }
      cout<<endl;
  }
  cout<<"\nEnter the second matrix:";
  for(i=0;i<n2;i++)
  {
      for(j=0;j<m2;j++)
      {
          cin>>B[i][j];
      }
      cout<<endl;
  }
}
   void add()
{   cout<<"\nMatrix 1 entered is:";
    for(i=0;i<n1;i++)
  {
      for(j=0;j<m1;j++)
      {
         cout<<A[i][j]<<"  ";
      }
      cout<<endl;
  }
  cout<<"\nMatrix 2 entered is:";
  for(i=0;i<n2;i++)
  {
      for(j=0;j<m2;j++)
      {
          cout<<B[i][j]<<"  ";
      }
      cout<<endl;
  }
  for(i=0;i<n2;i++)
  {
      for(j=0;j<m2;j++)
      {
          C[i][j]=A[i][j]+B[i][j];
      }
      cout<<endl;
  }
    cout<<"\nSum of two matrices is:";
   for(i=0;i<n2;i++)
  {
      for(j=0;j<m2;j++)
      {
          cout<<C[i][j]<<"  ";
      }
      cout<<endl;
  }
}
  void subtract()
{
    cout<<"\nMatrix 1 entered is:";
    for(i=0;i<n1;i++)
  {
      for(j=0;j<m1;j++)
      {
         cout<<A[i][j]<<"  ";
      }
      cout<<endl;
  }
  cout<<"\nMatrix 2 entered is:";
  for(i=0;i<n2;i++)
  {
      for(j=0;j<m2;j++)
      {
          cout<<B[i][j]<<"  ";
      }
      cout<<endl;
  }
  for(i=0;i<n2;i++)
  {
      for(j=0;j<m2;j++)
      {
          C[i][j]=A[i][j]-B[i][j];
      }
      cout<<endl;
  }
   cout<<"\nDifference of two matrices is:";
   for(i=0;i<n2;i++)
  {
      for(j=0;j<m2;j++)
      {
          cout<<C[i][j]<<"  ";
      }
      cout<<endl;
  }
}
  void multiply()
{
    cout<<"\nMatrix 1 entered is:";
    for(i=0;i<n1;i++)
  {
      for(j=0;j<m1;j++)
      {
         cout<<A[i][j]<<"  ";
      }
      cout<<endl;
  }
  cout<<"\nMatrix 2 entered is:";
  for(i=0;i<n2;i++)
  {
      for(j=0;j<m2;j++)
      {
          cout<<B[i][j]<<"  ";
      }
      cout<<endl;
  }
  for(i=0;i<n1;i++)
  {
      for(j=0;j<m2;j++)
      {
          C[i][j]=0;
          for(k=0;k<n2;k++)
          {
              C[i][j]+=A[i][k]*B[k][j];

          }
      }
  }
  cout<<"\nProduct of two matrices is:";
  for(i=0;i<n1;i++)
  {
      for(j=0;j<m2;j++)
      {
          cout<<C[i][j]<<" ";
      }
      cout<<endl;
  }
}



int main()
{


    do{

        cout<<"\nEnter the number of rows in matrix 1:";
        cin>>n1;
        cout<<"\nEnter the number of columns in matrix 1:";
        cin>>m1;
        cout<<"\nEnter the number of rows in matrix 2:";
        cin>>n2;
        cout<<"\nEnter the number of columns in matrix 2:";
        cin>>m2;
        cout<<"\nMain Menu"<<"\n1. Add Two Matrices"<<"\n2. Subtract Two Matrices";
        cout<<"\n3. Multiply Two Matrices"<<"\n4. Exit"<<"\nenter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1: if(n1!=n2 || m1!=m2)
                      cout<<"\nInvalid input!! Number of rows and columns should be same!!";
                    else
                    {
                        input();
                        add();
                    }
                    break;
            case 2: if(n1!=n2 || m1!=m2)
                      cout<<"\nInvalid input!! Number of rows and columns should be same!!";
                    else
                    {
                        input();
                        subtract();
                    }
                    break;
            case 3: if(m1!=n2 || m2!=n1)
                       cout<<"\nInvalid input!!";
                    else
                    {
                        input();
                        multiply();
                    }
        }
      }while(ch!=4);
    return 0;
}
