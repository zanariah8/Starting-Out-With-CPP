#include <iostream>
#include <string>
using namespace std;
void calcStats(string[], float[], int);
int main(void){
    string months[12]={"Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec"};
    float rainfall[12];

    for(int i = 0; i < 12; i++){
        cout<<"Please enter the rainfall for "<<months[i]<<": ";
        cin>>rainfall[i];
    }
}


void calcStats(string months[], float rainfall[], int size){

    float sum = 0;
    float avg;
    float highest;
    float lowest;

    for(int i = 0; i < size; i++){
        sum += rainfall[i];
    }

    avg = sum / size;

}