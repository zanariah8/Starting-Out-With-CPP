#include <iostream>
using namespace std;
void selectionSort(int[],int);
void printArray(int[],int);
bool binarySearch(int[],int,int);
int main(void){
     int accounts[18]={5658845,4520125,7895122,8777541,8451277,1302850,
                      8080152,4562555,5552012,5050552,7825877,1250255,
                      1005231,6545231,3852085,7576651,7881200,4581002};

    int query = 0;
    bool exists;

    selectionSort(accounts,18);

    cout<<"Enter the account number you would like to search for: ";
    cin>>query;

    exists = binarySearch(accounts,18,query);

    if(exists){
        cout<<"The account exists in the data base!!"<<endl;
    }else{
        cout<<"The account does not exist!"<<endl;
    }

    return 0;


}

void selectionSort(int accounts[],int size){

    int minIndex, minValue;

    for(int i = 0; i < (size - 1); i++){
        minIndex = i;
        minValue = accounts[i];

        for(int j = i + 1; j < size; j++){
            if(accounts[j] < minValue){
                minValue = accounts[j];
                minIndex = j;
            }
        }
        accounts[minIndex] = accounts[i];
        accounts[i] = minValue;
    }
}

void printArray(int accounts[],int size){
    for(int i = 0; i < size; i++){
        cout<<accounts[i]<<endl;
    }
}

bool binarySearch(int accounts[], int size,int query){
    int first = 0;
    int last = size -1;
    int middle;
    bool found = false;
    while(!found && first<=last){
        middle = (first + last)/2;
        if(accounts[middle] == query){
            found = true;
        }else if(accounts[middle] > query){
            last = middle - 1;
        }else{
            first = middle + 1;
        }
    }

    return found;
}