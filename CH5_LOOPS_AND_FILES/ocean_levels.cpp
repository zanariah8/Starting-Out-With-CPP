#include <iostream>
using namespace std;
const float RISING = 1.5;
int main(void){
    float level=1.5;
    for(int i = 1; i<=25; i++){
        level += RISING;
        cout<<"In "<<i<<" years the ocean will rise by "<<level<<endl;
    }

    return 0;
}