#include<iostream>
using namespace std;
int s()
{
	 int i,j,a=5;

    for(i=1;i<=5;i++)  // row
    {
	for(j=1;j<=5;j++)    // col
	{
		cout<<" "<<a++;
	}
	cout<<"\n";
    }
}
int main()   // nested for loop
{
   s();
 
}

