#include<iostream>
using namespace std;

int s()
{
	
	int a,n;

	cout<<"Enter value of n:";
	cin>>n;
	for(a=2;a<=n;a++)
	{
		cout<<a++<<",  ";
	}
	
}
int main()
{s();
}