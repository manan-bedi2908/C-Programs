//************TEXT FILE ****************
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//**************************************
void create_fl();
void char_fl();
void lines_fl();
void words_fl();
//**************************************
int main()
{
      int op;
      char ans;
      cout<<"PROGRAM FOR CREATING A FILE "<<endl;
      cout<<"      MENU "
	  <<"\n1.CREATE FILE"
	  <<"\n2.NUMBER OF CHARACTERS"
	  <<"\n3.NUMBER OF WORDS"
	  <<"\n4.NUMBER OF LINES"
	  <<"\n5.EXIT";
      do
      {
	   cout<<"\nYOUR OPTION = ";
	   cin>>op;
	   switch(op)
	   {
		 case 1:create_fl();
			break;
		 case 2:char_fl();
			break;
		 case 3:words_fl();
			break;
		 case 4:lines_fl();
			break;
		 case 5:exit(0);
			break;
		 default:cout<<"WRONG OPTION";
			 break;
	    }
	    cout<<"DO YOU WANT TO CONTINUE = ";
	    cin>>ans;
       } while(ans=='y'||ans=='Y');
       return 0;
}
//**********************************************
void create_fl()
{
     char an;
     char str[20];
     ofstream fl;
     fl.open("String.txt");
     if(!fl)  cout<<"FILE OPENING ERROR";
     else
     {
	 do
	 {
	    cout<<"WRITE"<<endl;
	    gets(str);
	    fl<<str<<endl;
	    cout<<"DO YOU WANT TO WRITE MORE = ";
	    cin>>an;
	 } while(an=='y'||an=='Y');
	 fl.close();
      }
}
//****************************************
void char_fl()
{
    ifstream fl;
    int c=0;
    char ch;
    fl.open("String.txt");
    if(!fl)  cout<<"FILE OPENING ERROR";
    else
    {
       while(!fl.eof())
       {
	  fl.get(ch);
	  ++c;
       }
       cout<<"NUMBER OF CHARACTERS = "<<c-2<<endl;
       fl.close();
    }
}

//****************************************
void words_fl()
{
    ifstream fl;
    int c=0;
    char ch;
    fl.open("String.txt");
    if(!fl)  cout<<"FILE OPENING ERROR";
    else
    {
       while(!fl.eof())
       {
	  fl.get(ch);
	  if(ch==' '||ch=='\n')
	       c++;
       }
       fl.close();
       cout<<"NUMBER OF WORDS = "<<c<<endl;
    }
}
//***************************************
void lines_fl()
{
    ifstream fl;
    int c=0;
    char ch;
    fl.open("String.txt");
    if(!fl)  cout<<"FILE OPENING ERROR";
    else
    {
       while(!fl.eof())
       {
	  fl.get(ch);
	  if(ch=='.'||ch=='?'||ch=='\n')
	       c++;
       }
       fl.close();
       cout<<"NUMBER OF LINES = "<<c<<endl;
    }
}
