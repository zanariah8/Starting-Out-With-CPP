#include <iostream>
#include <iomanip>
using namespace std;
float calculateRetail(float,float);
int main(void){
    float wholesale=-1.0, markup=-1.0;
    while((wholesale < 0) && (markup < 0)){
        cout<<"Please enter the wholesale value of the item: ";
        cin>>wholesale;
        cout<<"Please enter the markup percentage of the item ";
        cin>>markup;
    }

    cout<<"The retail value of this iem is "<<setprecision(2)<<calculateRetail(wholesale,markup)<<endl;

    return 0;



}

float calculateRetail(float inWholesale, float inMarkup){
    inMarkup /= 100;
    return inWholesale + (inWholesale * inMarkup);
}

