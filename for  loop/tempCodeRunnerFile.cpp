#include<iostream>
using namespace std;
int main()
{
char str[15];
int i,j;
cout<<"enter a string:";
cin>>str;
j=0;
while(str[j]!='\0')
{
    j++;
}
for(i=j;i>=0;i--)
{
    cout<<""<<str[i];
}
cout<<"rev is string:"<<str;
}
