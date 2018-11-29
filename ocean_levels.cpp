//Ocean levels are rising at 1.5mm per year
//Write a program that displays the num of mm higher
//after 5 , 7, and 10 years
#include <iostream>
using namespace std;
const float mmperYear = 1.5E-3;
int main(void){

    cout<<"The levels will be "<<mmperYear * 5<<"mm higher in 5 years"<<endl;
    cout<<"The levels will be "<<mmperYear * 7<<"mm higher in 7 years"<<endl;
    cout<<"The levels will be "<<mmperYear * 10<<"mm higher in 10 years"<<endl;

    return 0;

}