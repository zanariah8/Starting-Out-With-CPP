#include <iostream>
using namespace std;
int bubbleSort(int[],int);
int selectionSort(int[],int);
void printArray(int[],int);
int main(void){
    const int SIZE = 20;
    int arr1[20] = {1,15,34,76,3,102,79,56,903,140,80,203,43,18,84,105,65,33,16,78};
    int arr2[20] = {1,15,34,76,3,102,79,56,903,140,80,203,43,18,84,105,65,33,16,78};

    int selectionSwaps = selectionSort(arr1,SIZE);
    int bubbleSwaps = bubbleSort(arr2,SIZE);

    cout<<"Bubble sort required "<<bubbleSwaps<<" swaps and "<<"Selection sort required "<<selectionSwaps<<" swaps."<<endl;
}

int bubbleSort(int arr[], int size){

    bool swap;
    int temp;
    int swaps = 0;

    do{
        swap = false;
        for(int i = 0; i < (size - 1); i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swap = true;
                ++swaps;
            }
        }
    }while(swap);

    return swaps;
}

int selectionSort(int arr[], int size){
    int minIndex,minValue;
    int swaps = 0;

    for(int i = 0; i < (size - 1); i++){
        minIndex = i;
        minValue = arr[i];
        for(int k = i + 1; k < size; k++){
            if(minValue > arr[k]){
                minValue = arr[k];
                minIndex = k;
                ++swaps;
            }
        }
        arr[minIndex] = arr[i];
        arr[i] = minValue;
    }
}

void printArray(int numbers[], int size){

    for(int i = 0; i < size; i++){
        cout<<numbers[i]<<" ";
    }

    return;
}