#include <iostream>
using namespace std;
int getarraySize();
void populateScores(int[],int);
void bubbleSort(int[],int);
void printArray(int[],int);
int calcAvg(int[],int);
int main(void){

    int* arr;
    int scores = getarraySize();
    arr = new int[scores];
    populateScores(arr,scores);
    bubbleSort(arr,scores);

}

int getarraySize(){
    int size;
    cout<<"Enter the number of test scores: ";
    cin>>size;
    return size;

}

void populateScores(int scores[], int size){
    for(int i = 0; i < size; i++){
        cout<<"Enter a score: ";
        cin>>scores[i];
    }
    
    return;
}

void bubbleSort(int scores[], int size){
    bool swap = false;
    int temp;
    do{
        swap = false;
        for(int i = 0; i < (size - 1); i++){
            if(scores[i] > scores[i+1]){
                temp = scores[i];
                scores[i] = scores[i+1];
                scores[i+1] = temp;
                swap = true;
            }
        }
    }while(swap);
}

void printArray(int scores[], int size){
    for(int i = 0; i < size; i++){
        cout<<scores[i]<<" ";
    }
    cout<<endl;
    return;
}

int calcAvg(int scores[], int size){
    int avg = 0;

    for(int i = 0; i < size; i++){
        avg += scores[i];
    }

    return (avg/size);
}
