#include<iostream>
using namespace std;
int s()
{
	 int i,j;
    
    for(i=2;i<=10;i+=2) 
    {
	for(j=1;j<=5;j++)   
	{
		cout<<" "<<i;
	}
	cout<<"\n";
    }
}
int main()   // nested for loop
{
   s();
}
