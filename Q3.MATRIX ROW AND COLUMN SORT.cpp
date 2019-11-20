 /* NITI TYAGI
 ROLL NO: 19522
    SORT EACH ROW IN ASCENDING ORDER,
	SORT EACH COLUMN IN DESCENDING ORDER,
	SORT ALL ELEMENTS IN ASCENDING ORDER AND STORE THEM IN ONE d array*/ 

#include<iostream>
using namespace std;

int show(int n1,int m1,int a[][100])
{

	 int d[n1*m1];
		 for(int i=0;i<n1;i++)
		   {
		   	for(int j=0;j<m1;j++)
		  	{
		  		cout<<a[i][j]<<" \t";
		  		if(j==m1-1)
		  		cout<<endl;
			
		     }
     	   }
         
  return 0;
}

int show1(int n1,int m1,int a[][100])

{
     for(int i=0;i<n1;i++)
		   {
		   	for(int j=0;j<m1;j++)
		  	  {
		  		cout<<a[i][j]<<" \t";
		  	
			  }
			 
		  		cout<<endl;
		   }

  return 0;
}





int row_sort(int n1,int m1,int a[][100])
{
   int t=0;	
	for(int i=0;i<n1;i++)
	{
		
		for(int j=0;j<m1;j++)
		{                                          //sorting each row in ascending order
			for(int k=j+1;k<m1;k++)
			{
				if(a[i][j]>a[i][k])
				{
					t=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=t;
				}
				
	 
			}
		
		
		}
			cout<<"\n\n THE MATRIX AFTER ROW "<<i+1<<" IS SORTED \n";
			show(n1,m1,a);
	}

	return 0;
}
	int col_sort(int n1,int m1,int a[][100])
	{
	
		int t=0;
    
                                            //sorting each column in descending order
		for(int i=0;i<=n1;i++)
   	{
		 
		for(int j=0;j<m1;j++)
		{
			for(int k=j+1;k<n1;k++)
			{
				
					
				if(a[j][i]<a[k][i])
				{
					t=a[j][i];
					a[j][i]=a[k][i];
					a[k][i]=t;
			
				}
			
	   }
		}
		cout<<"\n\n THE MATRIX AFTER COLUMN "<<i+1<<" IS SORTED \n";
		show1(n1,m1,a);
	}

	return 0;
}
	
int sort_store(int n1,int m1,int a[][100])
{
	int t=0;
	int d[100];
	for(int i=0;i<n1;i++)
   {
    for(int j=0;j<m1;j++)
    {
     for(int k=0;k<n1;k++)
     {
      for(int p=0;p<m1;p++)
      {
    	if(a[i][j]<a[k][p])   
    	{
	      t=a[i][j];
	      a[i][j]=a[k][p];
	      a[k][p]=t;
	    }
 
      }
     }
    }
   
   }
 
    cout<<"\n THE ARRAY IN ASCENDING ORDER..\n";
    show1(n1,m1,a);
       int r=0;
	  for(int i=0;i<n1;i++)
		   {
		   	for(int j=0;j<m1;j++)       //storing sorted array in one dimensional array..
		  	  {
		  	   d[r]=a[i][j];
				 r++;	
		  	
			  }
		   }
		   cout<<"\n\n THE ELEMENTS STORED IN ONE DIMENSIONAL ARRAY\n";
		for(int i=0;i<r;i++)
		{                                   //printing sorted one dimensional array..
			cout<<d[i]<<" , ";
		}
	
	return 0;
}
int main()
	{
	 int n1,m1,x=0;
	 int a[100][100];
	
	int r=1;
		  	while(r>0)
	 {
		 cout<<" \n ENTER THE ORDER OF MATRIX (0<n1<100,0<m1<100) : ";
		 cout<<"\n n1 = ";
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
		 
		 
		 
		 if(n1<=0)
		 {
		 	cout<<"\n\n INVALID ENTRY.. ";
		 	r++;
		 	continue;
		 }
		  cout<<"\n m1 = ";
		  cin>>m1;
		    while(1)
         {
             if(cin.fail())
              {
                 	cin.clear();
                	cin.ignore(100,'\n');
	                cout<<"You have entered wrong input"<<endl;
	                cout<<"Enter it again : ";
	                cin>>m1;
              }
             else
	        break;
         }
		 	  
		   if(m1<=0)
		 {
		 	cout<<"\n\n INVALID ENTRY.. ";
		 	r++;
		 	continue;
		 }
		 if(n1>0&&m1>0)
		 break;
	  }
		  cout<<" \nTHE ORDER OF MATRIX 1 : "<<n1<<"*"<<m1;
		  cout<<" \n\n ENTER THE ELEMENTS OF THE MATRIX 1 ..";
		  for(int i=0;i<n1;i++)
		   {
		   	for(int j=0;j<m1;j++)
		  	{
		  		cin>>a[i][j];
		  		 while(1)
         {
             if(cin.fail())
              {
                 	cin.clear();
                	cin.ignore(100,'\n');
	                cout<<"You have entered wrong input"<<endl;
	                cout<<"Enter it again : ";
	                cin>>a[i][j];
              }
             else
	        break;
         }
		  		
			  }
			 
		   }
		   cout<<"\n\n ELEMENTS OF MATRIX : \n";
		     show(n1,m1,a);
			 s:
			 cout<<"\n\n   ******MENU*****   "; 
		     cout<<"\n 1.sort each row in ascending order.\n";
		     cout<<"\n 2.sort each column in descending order.\n";
		     cout<<"\n 3.sort all elements in ascending order and store them in one dimensional array\n";
		     cout<<"\n 4.exit";
		     U:
		     cout<<"\n ENTER ANY ONE CHOICE FROM ABOVE..\n x = ";
		     cin>>x;
	        while(1)
         {
             if(cin.fail())
              {
                 	cin.clear();
                	cin.ignore(100,'\n');
	                cout<<"You have entered wrong input"<<endl;
	                cout<<"Enter it again : ";
	                cin>>x;
              }
             else
	        break;
         }
         switch(x)
         {
		 
		    case 1: 
			       {
			         cout<<"\n 1.sort each row in ascending order.\n";
			         cout<<" \n ORIGINAL MATRIX..\n";
					  show(n1,m1,a);
			         row_sort(n1,m1,a);
		            goto s;
		            }
		             break;
		    case 2:
		    	{
			    	cout<<"\n 2.sort each column in descending order.\n";
			    	 cout<<" \n ORIGINAL MATRIX..\n";
					  show(n1,m1,a);
		           col_sort(n1,m1,a);
		          goto s;
		        }
		         break;
		    case 3:
		    	{
				  cout<<"\n 3.sort all elements in ascending order and store them in one dimensional array\n";
				   cout<<" \n ORIGINAL MATRIX..\n";
					  show(n1,m1,a);
		          sort_store(n1,m1,a);
		          goto s;
		        }
		        break;
		    case 4:
		       	{
			       cout<<"\n 4.exit";
			        cout<<"\n ****exit****";
			        exit(0);
		        }
		        break;
		    default:
				{
    				cout<<"\nInvalid entry...";
    				goto U;
    			}
    		}
		   return 0;
	}
	
	
