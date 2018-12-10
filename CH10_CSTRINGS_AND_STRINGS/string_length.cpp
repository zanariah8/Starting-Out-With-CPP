#include <iostream>
using namespace std;
int stringLength(char[]);
int main(void){

    char strang[100] = "Hello Amit";
    int length = stringLength(strang);
    cout<<"The string "<<strang<<" has a length of "<<length<<endl;
    return 0;
}

int stringLength(char inputString[]){
    int length = 0;
    for(int i = 0; inputString[i] != '\0';i++){
        ++length;
    }

    return length;
}