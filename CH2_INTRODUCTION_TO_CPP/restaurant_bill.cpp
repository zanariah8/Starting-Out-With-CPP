//Write a program that computes the tax and tip
//on a restaurant bill. Tax should be 6.75 percent 
//of the meal cost. The tip should be 15 percent of
//the total after adding the tax. Display meal cost
//tax amount, tip amount, and total bill on screen
#include <iostream>
using namespace std;
const float TAX = .0675;
const float TIP = .15;
int main(void){
    
    float mealPrice = 44.50;
    float afterTax = (mealPrice * TAX) + mealPrice;
    float afterTip = (afterTax * TIP) + afterTax;

    cout<<"The total cost of the meal is "<<mealPrice<<endl;
    cout<<"The tax amount is "<<TAX<<endl;
    cout<<"The tip amount is "<<TIP<<endl;
    cout<<"======="<<endl;
    cout<<"The total bill is: "<<afterTip<<endl;

    return 0;

}