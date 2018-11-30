#include <iostream>
using namespace std;
int main(void){

    float numofGallons;
    float numofMiles;

    cout<<"Enter the number of gallons the car can hold"<<endl;
    cin>>numofGallons;
    cout<<"Enter the number of miles the car can go on a full tank"<<endl;
    cin>>numofMiles;

    cout<<"This car will give you "<<(numofMiles / numofGallons)<<" miles per gallon"<<endl;

    return 0;

}