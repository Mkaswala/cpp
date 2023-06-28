#include<iostream>
using namespace std;
class batsman
{
   
    int bcode;
    float batavg;
    int inings,runs,notout;
    char bname[20];
    float calcavg()
    {
       return runs/(inings-notout);
    }
    public:
    void getdata()
    {
       cout<<"Enter the bcode no. :";
       cin>>bcode; 
        cout<<"Enter the batter name :";
       cin>>bname;
       cout<<"Enter the inings :";
       cin>>inings;
       cout<<"Enter the runs :";
       cin>>runs;
       cout<<"Enter the notout :";
       cin>>notout;
      batavg = calcavg();
      
 }

void displaydata()
{
    cout<<"batter no.:"<<bcode<<endl;
    cout<<"Batter name:"<<bname<<endl;
    cout<<"Inings  :"<<inings<<endl;
    cout<<"runs :"<<runs<<endl;
    cout<<"notout:"<<notout<<endl;
    cout<<"Batting avg. :"<<batavg<<endl;
}

    
};
int main()
{
    batsman z;
    z.getdata();
    z.displaydata();
}