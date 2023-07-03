#include<iostream>
using namespace std;
class shape
{
    shape1(int a)
    {
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Volume of cube is :"<<a*a*a<<endl;
    }
    shape2(int r)
    {
        cout<<"Enter the sphere radius : ";
        cin>>r;
        cout<<"Volume of sphere is :"<<4/3*3.14*r*r*r<<endl;
    }
    shape3(int r,int h)
    {
        cout<<"Enter the cylinder radius :";
        cin>>r;
        cout<<"Enter the cylinder hight:";
        cin>>h;
        cout<<"volume of cylinder is "<<3.14*r*r*h<<endl;
    }
    shape4(int r,int h)
    {
        cout<<"Enter the cone radius :";
        cin>>r;
        cout<<"Enter the cone hight:";
        cin>>h;
        cout<<"volume of cone is "<<3.14*r*r*h/3<<endl;
    }
};
int main()
{
    shape a(5),r(6),h(7);
}
