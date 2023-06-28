#include<iostream>
using namespace std;
class TEST {
int TestCode;
string Description;
int NoCandidates;
int CALCNTR()   {
 return (NoCandidates/100+1);
}
public :
void SCHEDULE();
void DISPTEST();
};
void TEST :: SCHEDULE () {
cout<<"Enter TestCode: ";
cin>> TestCode;
cout<<"Enter Description: ";
cin>>Description;
cout<<"Enter NoCandidate: ";
cin >> NoCandidates ;
int number_of_centers = CALCNTR();
}
void TEST :: DISPTEST() {
cout<<"TestCode: "<<TestCode<<endl;
cout<<"Description: "<<Description<<endl;
cout<<"NoCandidates :"<<NoCandidates<<endl;
cout<<"number of centers: "<<CALCNTR()<<endl;
}
int main()
{

 TEST mk ;

mk.SCHEDULE();
mk.DISPTEST();
  

}