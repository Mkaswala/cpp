#include<iostream>
using namespace std;
class result{ 
    
    int m,s,e,total;
    float per;
    public:
    void set()
    {
            cout<<"Enter maths marks :";
            cin>>m;
            cout<<"Enter science marks :";
            cin>>s;
            cout<<"Enter english marks :";
            cin>>e;
                     
        }
        
    
    void r()
    {
        total=m+s+e;
        per=total/3;
        


    }
    void a(){
        cout<<"maths\tsci\tEng\ttotal\tper\n";
        cout<<m<<"\t"<<s<<"\t"<<e<<"\t"<<total<<"\t"<<per<<"\t";
        cout<<"\nCongratulations You Pass in Exam....";
        

    }

};

int main()
{
    result x;
    x.set();
    x.r();
    x.a();
}