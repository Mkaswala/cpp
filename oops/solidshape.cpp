#include<iostream>
using namespace std;
class shape{
    public:
    shape(int a,int b,int c)
    {
        cout<<"rectangular is :"<<a*b*c<<endl;
    }
    shape(int a,double b,int c)
    {
        cout<<"square orrectangular is :"<<(4/3)*3.14*a*b*c<<endl;
    }
    shape(int a,int b,double c)
    {
        cout<<"ellipsoid is :"<<(4/3)*3.14*a*b*c<<endl;
    }
     shape(int a)
    {
        cout<<"cube is :"<<a*a*a<<endl;
    }
     shape(double a)
    {
        cout<<"shpere is :"<<(4/3)*3.14*(a*a*a)<<endl;
    }
      shape(int a,int b)
    {
        cout<<"cylinder is :"<<3.14*(a*a)*b<<endl;
    }
      shape(double a,double b)
    {
        cout<<"pyramid is :"<<0.33*3.14*(a*a)<<endl;
    }
      shape(int a,double b)
    {
        cout<<"right circular cone is :"<<0.33*3.14*(a*a)*b<<endl;
    }
      shape(double a,int b)
    {
        cout<<"prisam is :"<<a*b<<endl;
    }
};
int main()
{
    shape a(4,3,5),b(5,3.4,5),c(3,6,5.4),d(3.5),e(3.5),f(3,4),g(3.4,5.6),h(3,4.5),i(5.6,5);
}