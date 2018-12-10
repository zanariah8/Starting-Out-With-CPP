#include <iostream>
#include <cstring>
using namespace std;
void sentenceCapitalizer(char[]);
int main(void){
    char sentence [100] = "my name is Amit. what is yours? how are you? yeah!";
    cout<<sentence<<endl<<endl;;
    sentenceCapitalizer(sentence);
    cout<<sentence<<endl;

    return 0;

}

void sentenceCapitalizer(char inputString[]){
    int i = 0;

    inputString[0] = toupper(inputString[0]);
    while(inputString[i+1] != '\0'){
        if(ispunct(inputString[i])){
            inputString[i+2] = toupper(inputString[i+2]);
        }
        ++i;
    }
    
    return;
}