//One acre of land is equiv. to 43,560 square feet
//Write a prog. that calculates the number of acres 
//in 389,767 miles of land
#include <iostream>
using namespace std;
const float ACRE = 43560;
int main(void){

    float totalMiles = 389767;

    cout<<"The number of acres in this plot is "<<totalMiles / ACRE<<" acres"<<endl;

    return 0;
}