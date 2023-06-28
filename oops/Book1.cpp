#include<iostream>
using namespace std;
class book
{
int bno;
char btytle[20];
float price;
float total_cost(int x)
{
float total;
total=price*x;
return total;
}
public:
void input()
 {
    cout<<"\nEnter book number : ";
    cin>>bno;
    cout<<"\nBook title :";
    cin>>btytle;
    cout<<"\nPrice of book :";
    cin>>price;
  }
void purchase()
{
    cout<<"Enter the number of copies to be purchased"<<"\n";
int n;
    cin>>n;
float total;
total=total_cost(n);
    cout<<"Total cost to be paid by the user:"<<total<<""<<"\n";
}
};
int main()
{
book b;
b.input();
b.purchase();
}