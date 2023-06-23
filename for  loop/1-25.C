#include<iostream>
using namespace std;
int s()
{
	 int i,j;

    for(i=1;i<=5;i+=5)  // row
    {
	for(j=1;j<=25;j++)    // col
	{
		cout<<" "<<j;
	}
	cout<<"\n";
    }
}
int main()   // nested for loop
{
   s();
 
}

