#include<conio.h> 
#include<fstream.h>
#include<stdio.h>
void create_file()
{
  char str[80];
  int i;
  ofstream afile("Ram.txt");
  cout<<"\nEnter any string:";
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    afile.put(str[i]);
  }
  afile.close();           getche();
}
void count_char()
{  int count=0;
  char ch;ifstream afile("Ram.txt");
  while(afile)
  {
    afile.get(ch);
    count++;
  }
  cout<<"\nTotal number of characters:"<<count;
  afile.close();  getche();
}
void count_words()
{
  char str[80];
  int i=0;
  ifstream afile("Ram.txt");
  while(afile)
  {
   afile>>str;
   i++;
  }
  cout<<"\nTotal Number of words:"<<i;
  afile.close();
  getche();
}
void count_lines()
{
  char str[80];
  int i=0;
  ifstream afile("Ram.txt");
  while(afile)
  {
    afile.getline(str,79);
    i++;
  }
  cout<<"\nTotal Number of lines:"<<i;
  afile.close();
  getche();
}
void main()
{
  int ch;
  cout<<"\nMenu"<<"\n1.Create File"<<"\n2.Number of characters"<<"\n3Number of words";
  cout<<"\n4Number of lines"<<"\n5.Exit";
  do
  {
    cout<<"\nEnter your choice:";
    cin>>ch;
    switch(ch)
    {
      case 1: create_file();
		break;
      case 2: count_char();
	      break;
      case 3: count_words();
	      break;
      case 4: count_lines();
	      break;
    }
  }while(ch!=5);
  getche();
}