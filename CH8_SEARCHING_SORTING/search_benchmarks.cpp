#include <iostream>
using namespace std;
int linearSearch(int[],int,int);
int binarySearch(int[],int,int);
void selectionSort(int[],int);
void printArray(int[],int);
int main(void){
    const int SIZE = 20;
    int numbers[20] = {1,15,34,76,3,102,79,56,903,140,80,203,43,18,84,105,65,33,16,78};

    selectionSort(numbers,SIZE);
    printArray(numbers,SIZE);
    cout<<endl<<endl;


    int comp = linearSearch(numbers,SIZE,1);

    cout<<"With a linear search it took "<<comp<<" comparisons to find the value"<<endl;

    comp = binarySearch(numbers,SIZE,1);

    cout<<"With a binarysearch it took "<<comp<<" comparisons to find the value"<<endl;


    return 0;
}

int linearSearch(int numbers[], int size, int query){

    int comparisons = 0;

    for(int i = 0; i < size; i++){
        if(numbers[i] == query){
            ++comparisons;
            return comparisons;
        }
        ++comparisons;
    }

    return comparisons;
}

int binarySearch(int numbers[], int size, int query){
    int first = 0;
    int last = size - 1;
    int middle;
    bool found = false;
    int comparisons = 0;

    while(!found && first <= last){
        middle = (first + last)/2;
        if(numbers[middle] == query){
            found = true;
            ++comparisons;
        }else if(numbers[middle] < query){
            first = middle + 1;
        }else{
            last = middle - 1;
        }
        ++comparisons;
    }

    return comparisons;
}

void selectionSort(int numbers[], int size){

    int minValue, minIndex;

    for(int i = 0; i < (size - 1); i++){
        minValue = numbers[i];
        minIndex = i;

        for(int j = (i + 1); j < size; j++){
            if(numbers[j] < minValue){
                minValue = numbers[j];
                minIndex = j;
            }
        }

        numbers[minIndex] = numbers[i];
        numbers[i] = minValue;
    }

    return;
}

void printArray(int numbers[], int size){

    for(int i = 0; i < size; i++){
        cout<<numbers[i]<<" ";
    }

    return;
}