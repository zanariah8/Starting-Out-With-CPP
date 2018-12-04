#include <iostream>
using namespace std;
const float CAL_PER_MIN_BURNED = 3.9;
int main(void){

    int minutes = 10;

    while(minutes<=30){
        cout<<"After "<<minutes<<" minutes you will burn "<<minutes * CAL_PER_MIN_BURNED<<" calories"<<endl;
        minutes += 5;
    }

    return 0;

}