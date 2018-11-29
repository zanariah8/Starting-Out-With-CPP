//Write a program that calculates an employees annual pay
#include <iostream>
using namespace std;
int main(void){

    float payAmount = 1700.0;
    float payPeriods = 26;
    float annualPay = payAmount * payPeriods;

    cout<<"The employees annual pay is "<<annualPay<<endl;

    return 0;
}