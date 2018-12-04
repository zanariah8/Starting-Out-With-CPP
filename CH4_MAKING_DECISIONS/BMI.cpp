#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    float BMI,weight,height;

    cout<<"Enter your weight in lbs"<<endl;
    cin>>weight;
    cout<<"Enter your height in inches"<<endl;
    cin>>height;

    BMI = (weight * 703)/pow(height,2.0);

    if(BMI<25 && BMI > 18.5){
        cout<<"You have optimal weight"<<endl;
    }else if(BMI < 18.5){
        cout<<"You are underweight"<<endl;
    }else{
        cout<<"Not good man."<<endl;
    }

    return 0;
}