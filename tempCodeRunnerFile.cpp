#include<iostream>
using namespace std;
class shape
{
    shape(int a)
    {
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Volume of cube is :"<<a^a^a<<endl;
    }
    shape(double r)
    {
        cout<<"Enter the sphere radius : ";
        cin>>r;
        cout<<"Volume of sphere is :"<<4/3*3.14*r^r^r<<endl;
    }
}