#include<iostream>
#include<string>

using namespace std;

void wordcnt(string str)
{
  int len=str.length();
  int c=1;
  for(int i=0;i<len;i++)
  {
     if(str[i]==' ')
     {
       cout<<str<<endl;
       c++;
     }
  }
  cout<<"The number of words in the string "<<str<<" = "<<c;
  return;
}

void vowelcnt(string str)
{
  int len=str.length();
  int c=0;
  for(int i=0;i<len;i++)
  {
    if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
       c++;
  }
  cout<<"The number of vowels in the string "<<str<<" = "<<c;
  return;
}

void searchstr(string str)
{
  int where;
  string str2;
  cout<<"Enter the substring to be searched = ";
  cin>>str2;
  where=str.find(str2);
  if(where!=string::npos)
  {
     cout<<str2<<" present at "<<where<<endl;
     while(where!=string::npos)
     {
      where=str.find(str2,where+1);
      if(where!=string::npos)
      cout<<str2<<" present at "<<where<<endl;
     }
  }
  else
     cout<<str2<<" not present.\n";
  return;
}

void cmpstr(string str)
{
  string str2;
  cout<<"Enter the string to be compared = ";
  cin>>str2;
  cout<<"\nMETHOD 1 : Using RELATIONAL OPERATORS\n\n";
  bool result;
  result= str==str2;
  if(result==1)
  {
      cout<<"Test -- str1==str2 :    "<<result<<endl;
      cout<<str<<" is equal to "<<str2;
  }
  else
  {
    result= str>str2;
    if(result==1)
    {
      cout<<"Test -- str1>str2  :    "<<result<<endl;
      cout<<str<<" is greater than "<<str2;
    }
    else
    {
      result= str<str2;
      cout<<"Test 3-- str1<str2  :    "<<result<<endl;
      cout<<str<<" is smaller than "<<str2;
    }
  }
  cout<<"\n\nMETHOD 2  : Using COMPARE FUNCTION\n\n";
  int r;
  r=str.compare(str2);
  if(r==0)
    cout<<str<<" is equal to "<<str2;
  else if(r>0)
     cout<<str<<" is greater than "<<str2;
  else
     cout<<str<<" is smaller than "<<str2;

  return;
}

void insertstr(string str)
{
  string str2;
  cout<<"Enter the string to be inserted = ";
  cin>>str2;
  cout<<"Enter the location at which the string is to be inserted in string1 : ";
  int pos;
  cin>>pos;
  str.insert(pos,str2);
  cout<<"String 1 after insertion : "<<str;
  return;
}

void removestr(string str)
{
  string str2;
  cout<<"Enter the string to be removed from string1 = ";
  cin>>str2;
  int len=str2.length();
  int where;
  where=str.find(str2);
  if(where!=string::npos)
  {
    str.erase(where,len);
    cout<<"String 1 after removing "<<str2<<" :  "<<str;
  }
  else
    cout<<str2<<" not present in "<<str;
  return;
}

void joinstr1(string str)
{
  string str2;
  cout<<"Enter the string to be joined in string 1 = ";
  cin>>str2;
  str += str2;
  cout<<"Append using += operator : "<<str<<endl;
  return;
}

void joinstr2(string str)
{
  string str2;
  cout<<"Enter the string to be joined in string 1 = ";
  cin>>str2;
  str.append(str2);
  cout<<"Join using APPEND FUNCTION : "<<str<<endl;
  return;
}

int main()
{
  int op;
  char ans;
  string str;
  cout<<"Enter string 1 on which manipulations are to be done :  ";
  getline(cin,str);
  do
  {
    cout<<"      MENU       \n"
        <<"1.Count the no. of words and print each in a separate line\n"
        <<"2.Count the no. of vowels\n"
        <<"3.Read a string S2 and search it in string 1\n"
        <<"4.Compare two strings using two different methods\n"
        <<"5.Read a string S2 and insert it in the string1 at the desired location\n"
        <<"6.Read a string S2 and remove it from string 1 if present\n"
        <<"7.Join two strings using += operator\n"
        <<"8.Join two strings using append function\n";
    cout<<"Enter your option = ";
    cin>>op;
    switch(op)
    {
       case 1: cout<<"String 1 : "<<str<<endl;
               wordcnt(str);
               break;
       case 2: cout<<"String 1 : "<<str<<endl;
               vowelcnt(str);
               break;
       case 3: cout<<"String 1 : "<<str<<endl;
               searchstr(str);
               break;
       case 4: cout<<"String 1 : "<<str<<endl;
               cmpstr(str);
               break;
       case 5: cout<<"String 1 : "<<str<<endl;
               insertstr(str);
               break;
       case 6: cout<<"String 1 : "<<str<<endl;
               removestr(str);
               break;
       case 7: cout<<"String 1 : "<<str<<endl;
               joinstr1(str);
               break;
       case 8: cout<<"String 1 : "<<str<<endl;
               joinstr2(str);
               break;
      default: cout<<"Wrong option";
               break;
    }
    cout<<"\nDo you want to continue : ";
    cin>>ans;
  }while(ans=='Y'||ans=='y');
  return 0;
}
