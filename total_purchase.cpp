//Write a program that holds the prices of 5 items in 5
//variables. Display each items price, the amount of sales tasx
//And the total. Assume sales tax is 6%
#include <iostream>
using namespace std;
const float TAX = .006;
int main(void){

    float item1 = 12.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 14.95;
    float item5 = 3.95;

    float subtotal = item1 + item2 + item3 + item4 + item5;
    float total = (subtotal * TAX) + subtotal;

    cout<<"The subtotal for this purchase is "<<subtotal<<endl;
    cout<<"The tax for this purchase is "<<TAX<<endl;
    cout<<"The total after tax is "<<total<<endl;

    return 0;



}