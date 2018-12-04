#include <iostream>
#include <string>
using namespace std;
const int AVG = 6.72;
int main(void){
    string month1,month2,month3;
    cout<<"Enter 3 months (separated by spaces) to get the average rainfall"<<endl;
    cin>>month1>>month2>>month3;

    cout<<"The average rainfall for "<<month1<<", "<<month2<<", "<<month3<<" is "<<AVG<<endl;

    return 0;
}