#include <iostream>
using namespace std;
int* arrayAllocator(int);
int main(void){
    int elements;
    cout<<"Enter the number of elements you would like to have in your array: ";
    cin>>elements;

    int* arr = arrayAllocator(5);
    //delete [] arr;
    return 0;

}

int* arrayAllocator(int numofElements){
    int* array;
    array = new int[numofElements];
    return array;
}