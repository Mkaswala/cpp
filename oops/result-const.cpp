#include<iostream>
using namespace std;
class test{ 
    
    int m,s,e,total;
    float per;
    public:
    test()
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
    test x;
  
    x.r();
    x.a();
}