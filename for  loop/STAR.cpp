#include<iostream>
using namespace std;

int main()
{
    char i,j;
    for(i=1;i<=5;i++)  // row
    {
	for(j=1;j<=3;j++)    // col
	{
		cout<<"* ";
	}
	cout<<endl;
    }
    return 0;
}