//Write a program that calculates the average of 28, 32, 37, 24, and 33
#include <iostream>
using namespace std;
int main(void){
    double val1 = 28;
    double val2 = 32;
    double val3 = 37;
    double val4 = 24;
    double val5 = 33;

    double sum = val1 + val2 + val3 + val4 + val5;

    double average = sum / 5;

    cout<<"The average of the numbers is "<<average<<endl;

    return 0;
}