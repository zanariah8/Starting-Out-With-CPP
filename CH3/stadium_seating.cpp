#include <iostream>
#include <iomanip>
using namespace std;
const float CLASSA_COST = 15.0;
const float CLASSB_COST = 12.0;
const float CLASSC_COST = 9.0;
int main(void){

    float numofClassA, numofClassB, numofClassC;

    cout<<"Enter number of class A tickets sold "<<endl;
    cin>>numofClassA;
    cout<<"Enter number of class B tickets sold "<<endl;
    cin>>numofClassB;
    cout<<"Enter number of class C tickets sold "<<endl;
    cin>>numofClassC;
    cout<<endl<<endl;

    cout<<"Income generated from Class A: "<<setprecision(2)<<fixed<<numofClassA * CLASSA_COST<<endl;
    cout<<"Income generated from Class B: "<<setprecision(2)<<numofClassB * CLASSB_COST<<endl;
    cout<<"Income generated from Class C: "<<setprecision(2)<<numofClassC * CLASSC_COST<<endl;

    return 0;

}