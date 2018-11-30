#include <iostream>
#include <iomanip>
using namespace std;
int main(void){

    float test1, test2, test3, test4, test5, avg;

    cout<<"Enter 5 test scores with spaces in between"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    avg = (test1+test2+test3+test4+test5)/5;

    cout<<"The average of the scores is "<<setprecision(2)<<fixed<<avg<<endl;

    return 0;
}