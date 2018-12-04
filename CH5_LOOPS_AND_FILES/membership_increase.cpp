#include <iostream>
using namespace std;
const float INCREASE_RATE = .04;
int main(void){
    float newFee = 2500;
    for(int i = 1; i <= 6; i++){
        
        newFee = (newFee * INCREASE_RATE) + newFee;
        cout<<"In "<<i<<" years the fee will be "<<newFee<<endl;
    }

    return 0;
}