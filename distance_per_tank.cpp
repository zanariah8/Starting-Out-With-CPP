//A car with 20 gallon gas tank avgs 21.5mpg in town and 26.8mpg on highway
//Calculate the distance the car can travel in town & highway on a full tank.
#include <iostream>
using namespace std;
int main(void){

    int maxGal = 20;
    int townMpg = 21.5;
    int highwayMpg = 26.8;

    cout<<"This vehicle can get "<<maxGal * townMpg<<" miles in town and "<<maxGal * highwayMpg<<" miles on the highway."<<endl;

    return 0;
}