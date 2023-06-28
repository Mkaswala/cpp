#include<iostream>
using namespace std;
class report
{
	int adno;
	char name[20];
	float marks[5];
	float average;
	void getavg()
	{
		average = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
	}
public:
	void readinfo();
	void displayinfo();
};
void readinfo()
{
	do
	{
		cout<<"Enter 4 digit admission number ";
		cin>>adno;
	}while(adno<999 || adno>10000);
	cout<<"Enter name";
	gets(name);
	cout<<"Enter marks in ";
	for(int i=0;i<5;i++)
	{
		cout<<"Subject "<<i+1<<":";
		cin>>marks[i];
	};
	getavg();
}
void displayinfo()
{
	cout<<"Admission number:"<<adno<<" Name:"<<name<<" Marks are:"<< marks[0]<<" "<< marks[1]
	<<" "<<marks[2]<<" "<< marks[3]<<" "<< marks[4]<<" Average:"<<average;
}
int main()
{
	report x;
	x.readinfo();
	x.displayinfo();
	
}
