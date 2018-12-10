#include <iostream>
using namespace std;
int wordCount(char[]);
int stringLength(char[]);
int main(void){
    char strang[100] = "Hello my name is Amit";
    int wc = wordCount(strang);
    int length = stringLength(strang);
    int avg = (length/wc);
    cout<<"The number of words is "<<wc<<endl;
    cout<<"The average number of letters per word is "<<avg<<endl;
    return 0;

}

int wordCount(char inputString[]){
    int words = 0;

    for(int i = 0; inputString[i] != '\0'; i++){
        if(inputString[i] == ' '){
            ++words;
        }
    }

    return (words + 1);
}

int stringLength(char inputString[]){
    int length = 0;
    for(int i = 0; inputString[i] != '\0';i++){
        ++length;
    }

    return length;
}