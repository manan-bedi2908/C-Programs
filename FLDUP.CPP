//************TEXT FILE ****************
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

//**************************************
void create_fl();
void dup_fl();

//**************************************
int main()
{
      clrscr();
      cout<<"PROGRAM FOR CREATING A DUPLICATE FILE"<<endl;
      create_fl();
      dup_fl();
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
void dup_fl()
{
   ifstream fl1;
   ofstream fl2;
   char ch;
   fl1.open("String.txt");
   fl2.open("dupli.txt");
   if(!fl1 || !fl2)  cout<<"ERROR";
   else
   {
     while(!fl1.eof())
     {
       fl1.get(ch);
       fl2<<ch;
     }
     fl1.close();
     fl2.close();
   }
}

