#include <iostream>
using namespace std;
int main(void){
    char ascii = 0;

    do{
        cout<<"PRINTING CHAR "<<(int)ascii<<" "<<ascii<<endl;
        ascii++;
    }while(ascii<127);
}