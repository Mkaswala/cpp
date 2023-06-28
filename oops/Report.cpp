#include <iostream>
#include <string>
using namespace std;
class report 
{
private:
    char adno[5];
    char name[21];
    float marks[5];
    float avg;
    void getavg();


public:    
    void readinfo();
    void displayinfo();
};


void getavg() 
{
    avg = 0.0;
    for (int i=0; i<5; ++i)
    avg += marks[i];
    avg /= 5;
}


void readinfo() {
cout << "Enter an admission number: ";
cout << "Enter a name: ";
for (int i=0; i<5; i++) {
        cout << "Enter " << i+1 << "th mark: ";
        cin >> marks[i];
    }
    getavg();
}
void displayinfo() {
    cout << "Admisson number: " << adno << endl;
    cout << "Name: " << name << endl;
    cout << "Marks obtained:" << endl;
    for (int i=0; i<5; ++i) {
        cout << marks[i] << " ";
    }
    cout << endl;
    cout << "Average marks: " << avg << endl;
}



int main() {
    report mk;
mk.readinfo();
mk.displayinfo();
}