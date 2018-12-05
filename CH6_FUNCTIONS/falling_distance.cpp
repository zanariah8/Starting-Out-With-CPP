#include <iostream>
#include <cmath>
using namespace std;
float fallingDistance(float);
int main(void){

    for(float i=1 ; i<11; i++){
        cout<<"The distance at "<<i<<" seconds is "<<fallingDistance(i)<<endl;
    }

    return 0;
}

float fallingDistance(float time){
    float timesqurr = pow(time,2.0);
    return 0.5 * 9.8 * timesqurr;
}