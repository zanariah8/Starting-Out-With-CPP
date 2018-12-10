#include <iostream>
using namespace std;
int stringLength(char[]);
void printBackwards(char[]);
int main(void){
    char strang[50] = "Gravity";
    cout<<"The string is "<<strang<<endl;
    cout<<"The string printed backwards is "<<endl;
    printBackwards(strang);
    return 0;
}

void printBackwards(char inputString[]){

    int nullPos = stringLength(inputString);
    for(int i = (nullPos - 1) ; i >= 0; i--){
        cout<<inputString[i];
    }
    cout<<endl;
}

int stringLength(char inputString[]){
    int length = 0;
    for(int i = 0; inputString[i] != '\0';i++){
        ++length;
    }

    return length;
}