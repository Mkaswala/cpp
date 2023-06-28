#include<iostream>
using namespace std;
class airport
{
    int flightnum;
    string destination;
    float distance,fuel;
    float calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else if (distance>1000&&distance<=2000)
        {
            fuel=1100;
        }
        else {
            fuel=2200;
        }
    }
    public:
    void feedinfo()
    {
        cout<<"Enter the flight no. :";
       cin>>flightnum; 
        cout<<"Enter the destination :";
       cin>>destination;
       cout<<"Enter distance :";
       cin>>distance;
      calfuel();
    }
    void showinfo()
    {
        cout<<"flight no.:"<<flightnum<<endl;
        cout<<"destination:"<<destination<<endl;
        cout<<"distance  :"<<distance<<endl;
        cout<<"fuel :"<<fuel<<endl;
      
    }

};
int main(){
    airport x;
    x.feedinfo();
    x.showinfo();
}