#include<iostream>
using namespace std;
class result
{ 
    
    int m,s,e,total,n;
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
        
    
    void cal()
    {
        total=m+s+e;
        per=(float)total/3;
        


    }
    void get()
   {
       
   
     cout<<m<<"\t"<<s<<"\t"<<e<<"\t"<<total<<"\t"<<per<<"\t";
   
          

    }
  
};

int main()
{
   result a[5];
   int i;
   for(i=0;i<3;i++)
   {
    cout<<"Roll no."<<i+1<<endl;
    a[i].set();
   }
    for(i=0;i<3;i++)
   {
    a[i].cal();
   }
cout<<"m\ts\te\ttotal\tper";
for(i=0;i<3;i++)
{
    cout<<"\n";
    a[i].get();
}
cout<<"\nCongratulations You Pass in Exam.....\10"<<endl;
}