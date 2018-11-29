//Write a program to calculate the MPG if a car holds
//12 gallons of gas and can travel 350 miles
#include <iostream>
using namespace std;
const float MAXGAL = 12;
const float MAXDISTINMILES = 350;
int main(void){

    float mpg = MAXDISTINMILES/MAXGAL;

    cout<<"This car gets "<<mpg<<" miles per gallon"<<endl;

    return 0;

}