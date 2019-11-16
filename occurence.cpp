#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void count(char * str);
int main()
{
    char str[20];
    cout<<"\nEnter a string:";
    gets(str);
    count(str);
    return 0;
}
void count(char * str)
{
    int i,j,cnt=1;
    int l;
    for(l=0;str[l];l++)
        str[l]=tolower(str[l]);
    for(i=0;i<l;i++)
    {
        if(!str[i])
            continue;
        for(j=i+1;j<l;j++)
        {
            if(str[i] == str[j]){
                cnt++;
                str[j]=0;
            }
        }
        cout<<"\nCharacter "<<str[i]<<"occurs: "<<cnt<<" times";
        cnt=1;
    }
}
