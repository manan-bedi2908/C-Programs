 #include<iostream>
using namespace std;
int A[10][10],n1,m1,i,j;
void input()
{
    cout<<"\nEnter the elements of matrix:";
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            cin>>A[i][j];
        }
    }
}
   void display()
{
    cout<<"\nElements entered are:"<<"\n";
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose()
{   display();
    cout<<"\n";
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
}
  void diagonal()
{
    display();
    int majorsum=0,minorsum=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            if(i==j)
                majorsum+=A[i][j];
            if(i+j==(n1-1))
                minorsum+=A[i][j];
        }
    }
    cout<<"\nSum of major diagonal elements: "<<majorsum;
    cout<<"\nSum of minor diagonal elements: "<<minorsum;
}
  void sum()
{
    display();
    int sum=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            sum+=A[i][j];
        }
        cout<<"\nSum of row "<<i+1<<" = "<<sum<<endl;
        sum=0;
    }
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            sum+=A[j][i];
        }
        cout<<"\nSum of column "<<i+1<<" = "<<sum<<endl;
        sum=0;
    }
}
  void large()
{
    display();
    int max=0,i=0;
    int result[n1];
    while(i<n1)
    {
        for(j=0;j<m1;j++)
        {
            if(A[i][j]>max)
            {
                max=A[i][j];
            }
        }
        result[i]=max;
        cout<<"\nMaximum Element of row "<<i+1<<" = "<<result[i];
        max=0;
        i++;
    }
}
    void small()
{
      int i=0;
    int min=INT_MAX;
    int result[n1];
    while(i<n1)
    {
        for(j=0;j<m1;j++)
        {
            if(A[i][j]<min)
            {
                min=A[i][j];
            }
        }
        result[i]=min;
        cout<<"\nMinimum element of row "<<i+1<<" = "<<result[i];
        min=INT_MAX;
        i++;
    }
}
    void super()
{
    int high=A[0][0];
    int low=A[0][0];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            if(A[i][j]>high)
                high=A[i][j];
            else
                if(A[i][j]<low)
                   low=A[i][j];
        }
    }
    cout<<"\nHighest element: "<<high;
    cout<<"\nLowest element: "<<low;
}
  int main()
{
    int ch;
    cout<<"\nEnter Number of rows of matrix :";
    cin>>n1;
    cout<<"\nEnter Number of columns of matrix :";
    cin>>m1;
    input();
    do
    {
        cout<<"\nMain Menu"<<"\n1.Transpose of matrix"<<"\n2.Sum of Major and Minor Diagonal elements"<<"\n3.Sum of Elements of each row and column"<<"\n4.Largest and smallest element in each row"<<"\n5.Exit";
        cout<<"\nEnter your choice:";
        while(!(cin>>ch))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"\nCharacter cannot be entered";
        }
        switch(ch)
        {
            case 1: transpose();
                    break;
            case 2: if(n1!=m1)
                      cout<<"\nNumber of rows and columns should be same!!";
                    else
                      diagonal();
                    break;
            case 3: sum();
                   break;
            case 4: large();
                    small();
                    super();
            default: cout<<"\nWrong choice entered!! Re-enter!!";
        }
    }while(ch!=5);
    return 0;
}
