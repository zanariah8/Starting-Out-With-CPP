#include <iostream>
using namespace std;
int main(void){
    int num1,num2;

    cout<<"Enter two numbers. Each number separated by a space"<<endl;
    cin>>num1>>num2;

    if(num1==num2){
        cout<<"The numbers are equal"<<endl;
    }else if(num1 < num2){
        cout<<num1<<" is smallest "<<num2<<" is largest"<<endl;
    }else{
        cout<<num2<<" is smallest "<<num1<<" is largest"<<endl;
    }

    return 0;
}