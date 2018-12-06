#include <iostream>
using namespace std;
int main(void){
    int arr[10];

    for(int i = 0; i < 10; i++){
        cout<<"Enter a number to store in the array: ";
        cin>>arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];
    
    for(int i = 0; i < 10; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    for(int i = 0; i < 10; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    cout<<"The smallest value in the array is "<<smallest<<" and the largest value in the array is "<<largest<<endl;


    return 0;
}