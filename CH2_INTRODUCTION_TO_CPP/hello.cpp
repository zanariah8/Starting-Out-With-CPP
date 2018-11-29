//Preprocessor directive: Gives us acess to cout
#include <iostream>
//Using the standard namespace. Ever name in iostream is part of std
using namespace std;
//Our main function, it sends an integer back to the OS at the end of execution
int main(void){
    //'<<' is called the stream insertion operator
    cout<<"Hello World!";
    return 0;
}