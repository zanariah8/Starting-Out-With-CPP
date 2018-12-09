#include <iostream>
#include <string>
using namespace std;
int getarraySize();
void populateArrays(string[],double[],int);
void bubbleSort(string[],double[],int);
void printReport(string[],double[],int);
int main(void){
    double *scores;
    string* names;
    int size = getarraySize();

    scores = new double[size];
    names = new string[size];

    populateArrays(names,scores,size);
    cout<<"The report before sorting is: "<<endl;
    printReport(names,scores,size);
    bubbleSort(names,scores,size);
    cout<<"The report after sorting is: "<<endl;
    printReport(names,scores,size);


}

int getarraySize(){
    int size;
    cout<<"Enter the number of students: ";
    cin>>size;
    return size;
}

void populateArrays(string names[],double scores[],int size){
    for(int i = 0; i < size; i++){
        cout<<"Enter the students name: ";
        cin>>names[i];
        cout<<"Enter the students score: ";
        cin>>scores[i];
    }
}

void bubbleSort(string names[], double scores[], int size){
    double tempScore;
    string tempName;
    bool swap = false;

    do{
        swap = false;
        for(int i = 0; i < size - 1; i++){
            if(*scores < (*(scores + 1))){
                tempScore = *(scores + 1);
                *(scores + 1) = *scores;
                *scores = tempScore;

                tempName = *(names + 1);
                *(names + 1) = *names;
                *names = tempName;

                swap = true;
            }
        }
    }while(swap);
}

void printReport(string names[], double scores[], int size){
    
    for(int i = 0; i < size; i++){
        cout<<names[i]<<": "<<scores[i]<<endl;
    }
}