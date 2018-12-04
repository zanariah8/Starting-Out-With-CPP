#include <iostream>
using namespace std;
int main(void){
    int l1,w1,l2,w2,area1,area2;

    cout<<"Enter the length and width of the first rectangle (separated by spaces)"<<endl;
    cin>>l1>>w1;
    cout<<"Enter the length and width of the second rectangle (separated by spaces)"<<endl;
    cin>>l2>>w2;

    area1 = l1 * w1;
    area2 = l2 * w2;

    if(area1 < area2){
        cout<<"Area 2 is the largest"<<endl;
    }else if(area1 > area2){
        cout<<"Area 1 is the largest"<<endl;
    }else{
        cout<<"The areas are equal"<<endl;
    }

    return 0;


}