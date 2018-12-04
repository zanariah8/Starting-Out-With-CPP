#include <iostream>
using namespace std;
const float CONSTANT = 9.8;
int main(void){

    float mass,weight;

    cout<<"Enter the objects mass in kg"<<endl;
    cin>>mass;
    weight = mass * CONSTANT;

    if(weight<10){
        cout<<"The weight is "<<weight<<" this object is too light"<<endl;
    }else if(weight>1000){
        cout<<"The weight is "<<weight<<" this object is too heavy"<<endl;
    }else{
        cout<<"The weight is "<<weight<<endl;
    }

    return 0;


}