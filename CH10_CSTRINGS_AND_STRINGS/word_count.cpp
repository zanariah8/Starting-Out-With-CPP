#include <iostream>
using namespace std;
int wordCount(char[]);
int main(void){
    char strang[100] = "Hello my name is Amit";
    int wc = wordCount(strang);
    cout<<"The number of words is "<<wc<<endl;
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