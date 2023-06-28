#include<iostream>
using namespace std;
class student
{
    private:
    int admno;
    float total,eng,maths,science;
    char sname[20];
    float ctotal()
    {
     return eng+maths+science;
    }
    public:
    void takedata()
    {
       cout<<"Enter the admin no. :";
       cin>>admno; 
        cout<<"Enter the student name :";
       cin>>sname;
       cout<<"Enter the English Marks :";
       cin>>eng;
       cout<<"Enter the Maths marks :";
       cin>>maths;
       cout<<"Enter the Science Marks :";
       cin>>science;
       total=ctotal();
      
 }

void showdata()
{
    cout<<"Admin no.:"<<admno<<endl;
    cout<<"student name:"<<sname<<endl;
    cout<<"English marks :"<<eng<<endl;
    cout<<"Maths marks :"<<maths<<endl;
    cout<<"Science marks :"<<science<<endl;
    cout<<"Total is :"<<total<<endl;
}

    
};
int main()
{
    student z;
    z.takedata();
    z.showdata();
}