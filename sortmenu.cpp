#include <iostream>
#include<iomanip>
using namespace  std ;
 int input()         // function for input and its validation
{
    int n ;
    cin>>n;
    while(1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"\n\t\t INVALID INPUT !!!"<<"\n\n Please Enter a Valid Input : ";
            cin>>n;

        }
        else
            break;

    }
    return n ;
}
char inputch()      // function for input of CHARACTER & its VALIDATION
{
    char ch ;
    cin>>ch;
    while(1)
    {
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"\n\t\t INVALID INPUT !!!"<<"\n\n Please Enter a Valid Input : ";
        cin>>ch;
    }
    else
        break;
    }
    return ch ;
}


 void inputar(int ar[][100],int n ,int m)
 {
     int i,j ;


      for( i = 0 ;i < n; ++i)
      	for ( j = 0; j < m; ++j)
         {
             cout<<" Enter the element of ROW "<<i+1<<" COLUMN "<<j+1<<" : ";

                  ar[i][j] = input();
         }


 	return ;

 }


  void printar(int ar[][100], int n ,int m)
   {
      int i,j ;

        for ( i = 0; i < n; ++i)
         {
           for ( j = 0; j < m; ++j)

               cout<<setw(5)<<ar[i][j];

            cout<<endl;
         }


   }


 int small(int ar[][100],int m , int row,int j)
  {
    int min = j ;

     for ( ; j < m; ++j)

     	if (ar[row][j] < ar[row][min])

           min = j ;



   return min ;

  }


  int big(int ar[][100], int n , int column, int i)
  {
     int max = i ;

      for ( ; i < n; ++i)

     	if (ar[i][column] > ar[max][column])

           max = i ;

   return max ;

  }

 void swap (int &a, int &b)
 {
    int temp = a ;
           a = b ;
           b = temp ;
 }


 void sortr(int ar[][100], int m, int row)
  {

     int min ;

       for (int j = 0; j < m; ++j)
       {
       	  min = small(ar,m,row,j);

          swap(ar[row][j],ar[row][min]) ;

       }


  }

 void sortc(int ar[][100], int n , int column)
   {

     int max ;

       for (int i = 0; i < n; ++i)
       {
       	  max = big(ar,n,column,i);

          swap(ar[i][column],ar[max][column]) ;

       }


  }

 void sort_all(int ar[][100], int n , int m,int sorted_ar[] )
  {
    int small ,x = 0,y = 0 ,j,a=0, b=0,R = 0, C = 0;

   	  for (int i = 0; i < m*n - 1 ; ++i)
   	  {
   	  	small = ar[R][C] ;

          for ( j = i + 1; j <= m*n; ++j)
           {
             if ( ar[x][y] < small)
          	   {
          	    small = ar[x][y] ;

          	     R = x ;
          	     C = y ;

                }


                  y++ ;

             if ( y == m )
                {
                  x++ ;
                  y = 0 ;
                }

           }

          	swap(ar[R][C],ar[a][b]) ;

               b++ ;

             if ( b == m )
                {
                  a++ ;
                  b = 0 ;
                }


            x = R = a;
            y = C = b;

   	  }

          x = 0 ;

        for ( int i = 0; i < n; ++i)
        {
        	for( j = 0; j < m ; ++j)
             {
                 sorted_ar[x] = ar[i][j] ;

                      x++;
             }

        }


  return ;


  }


  int main()
   {
       char ch ;
       int n , m,choice,i ;

       cout<<"\n\n MENU DRIVEN PROGRAM BASED ON MATRIX \n\n ";

       cout<<"Enter the no. of rows of MATRIX (LIMIT : 100) : ";
       n = input();


             while(n<=0 || n>100)                                            // this loop checks for positive input
               {
                   cout<<"\n\t\t INVALID INPUT !!!"<<"\n\n Please Enter a Valid Input : ";

                        n = input();

                }


       cout<<" Enter the no. of columns of MATRIX (LIMIT : 100) : ";
       m = input();


              while(m<=0 || m >100)                                            // this loop checks for positive input
                {

                    cout<<"\n\t\t INVALID INPUT !!!"<<"\n\n Please Enter a Valid Input : ";

                         m = input();

                }

         int ar[100][100], sorted_ar[500] ;

         inputar(ar,n,m) ;


          do{                                     // do - while loop for MENU

             cout<<"\n\n\t\t\t MAIN MENU \n\n"
                 <<"\n Enter the VALUES in the MATRIX ."
                 <<"\n Print the MATRIX ."
                 <<"\n SORT the each ROW of the MATRIX in ASCENDING ORDER."
                 <<"\n SORT the each COLUMN of the MATRIX in DESCENDING ORDER."
                 <<"\n SORT the whole MATRIX and store all the elements in 1-D ARRAY ."
                 <<"\n EXIT .";

             cout<<"\n\n Enter your choice : ";

              choice = input() ;


                while(!(choice >= 1 && choice <= 6))                                  // this loop checks for input between "1" and "8"
                {

                   cout<<"\n\t\t INVALID INPUT !!!"<<"\n\n Please Enter a Valid Input : ";

                      choice = input();

                }


              switch( choice )

                {
                    case 1 : {

                                   cout<<"\n\n Enter the no. of rows of MATRIX (LIMIT : 100) : ";

                                     n = input();


                              while(n<=0 || n>100)                                            // this loop checks for positive input
                               {

                                   cout<<"\n\t\t INVALID INPUT !!!"<<"\n\n Please Enter a Valid Input : ";

                                    n = input();

                               }


                                   cout<<" Enter the no. of columns of MATRIX (LIMIT : 100) : ";

                                     m = input();


                               while(m<=0 || m >100)                                            // this loop checks for positive input
                                {

                                    cout<<"\n\t\t INVALID INPUT !!!"<<"\n\n Please Enter a Valid Input : ";

                                     m = input();

                                 }


                                    inputar(ar,n,m) ;

                                      break ;

                              }


                    case 2 : {

                                 cout<<"\n\n Your MATRIX is : \n\n";

                                     printar(ar,n,m) ;

                                  break ;

                              }


                    case 3 : {

                                 cout<<"\n\n Your MATRIX is : \n\n";

                                     printar(ar,n,m) ;



                                for(i =0 ;i<n ;i++)
                                  {

                                    cout<<"\n\n Your MATRIX after SORTING  ROW : \""<<i+1<<"\" \n\n";

                                       sortr(ar,m,i) ;

                                     printar(ar,n,m) ;


                                  }


                                cout<<"\n\n Your FINAL MATRIX is : \n\n";

                                     printar(ar,n,m) ;

                                break ;


                             }


                    case 4 : {

                                   cout<<"\n\n Your MATRIX is : \n\n";

                                     printar(ar,n,m) ;



                                for(i =0 ;i<m ;i++)
                                  {

                                    cout<<"\n\n Your MATRIX after SORTING COLUMN : \""<<i+1<<"\" \n\n";

                                       sortc(ar,n,i) ;

                                     printar(ar,n,m) ;


                                  }


                                cout<<"\n\n Your FINAL MATRIX is : \n\n";

                                     printar(ar,n,m) ;

                                break ;


                              }


                    case 5 : {

                                  cout<<"\n\n Your MATRIX is : \n\n";

                                     printar(ar,n,m) ;


                                     sort_all(ar,n,m,sorted_ar) ;


                                  cout<<"\n\n Your SORTED MATRIX is : \n\n";

                                     printar(ar,n,m) ;

                                  cout<<"\n\n Your 1-D Sorted ARRAY is : \n\n";

                                     for ( i = 0; i < m*n; ++i)
                                     {
                                     	cout<<sorted_ar[i]<<" ";
                                     }


                                break ;


                             }

                    case 6 : return 0 ;


                }


                 cout<<"\n\n Wish to CONTINUE ? (y/n) ";

                     ch = inputch();

                    while(!(ch == 'y' || ch == 'Y' || ch == 'n' || ch == 'N'))                  // this loop checks for input to be "Y" or "N"
                        {

                           cout<<"\n\t\t INVALID INPUT !!!"<<"\n\n Please Enter a Valid Input : ";

                                      ch = inputch();

                        }


           }while(ch == 'y' || ch == 'Y');      // continue the same loop as user wish


        return 0 ;

   }
