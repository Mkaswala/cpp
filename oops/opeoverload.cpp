#include<iostream>
using namespace std;
class add{
  int l,w,h;
  public:
  void setdata(int a,int b,int c)
  {
    l=a;
    w=b;
    h=c;
  }
  int getdata()
  {
    return l*w*h;
  }
   add operator+ (add &n)
   {
    add t;
    t.l=l+n.l;
    t.w=w+n.w;
    t.h=h+n.h;
    return t;
   }
};
int main()
{
    add a,b,c;
    b.setdata(2,2,2);
    cout<<"add b volume is :"<<b.getdata()<<endl;
    a.setdata(3,3,3);
    cout<<"add a volume is :"<<a.getdata()<<endl;
    c=a+b;
    cout<<"add c volume is "<<c.getdata()<<endl;
}