#include <iostream>
using namespace std;
int main(void){
    int month, day, year;

    cout<<"Enter a month(numerical), day, and year (two digit) to see if it's a magic date. Separate all inputs with spaces"<<endl;
    cin>>month>>day>>year;
    if((month * day)==year){
        cout<<month<<"/"<<day<<"/"<<year<<" is magic because "<<month<<" times "<<day<<" is equal to the year!"<<endl;
    }else{
        cout<<"This is not a magic date"<<endl;
    }

    return 0;
}