#include <iostream>
using namespace std;
int main(void){
    int number=0;
    int sum = 0;
    cout<<"Enter a number and I will give you the sum of all the numbers before it (including the number you entered"<<endl;
    cin>>number;

    while(number < 0 ){
        cout<<"Error, Number must be greater than zero"<<endl;
        cin>>number;
    }

    for(int i = 1; i <= number; i++){
        sum += i;
    }

    cout<<"Sum is "<<sum<<endl;

    return 0;
    

}