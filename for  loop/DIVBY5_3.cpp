#include<iostream>
using namespace std;
int s()
{
int a;
	cout<<"Enter value of a:";
	cin>>a;
	if(a%5==0&&a%3==0)
	{
		cout<<a<<" is divisible by 5 and 3";
	}
	else{
		cout<<a<<" is not divisible by 5  and 3";
	}	
}
int main()
{
s();	
}