//Sort the following array of strings in ascending order
//Provide an option to search the array for a particular string

#include <iostream>
#include <string>
using namespace std;
void selectionSort(string[],int);
int binarySearch(string[],int,string);
void printArray(string[],int);
int main(void){

    const int NUM_NAMES = 20;
    string query;
    int position;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim", "Stamey, Marty", 
                               "Rose, Gery", "Taylor, Terri", "Johnson, Jill", "Allison, Jeff", "Looney, Joe",
                               "Wolfe, Bill", "James, Jean", "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                               "Javens, Renee", "Harrison, Rose", "Setzer, Cathy", "Pike, Gordon", "Holland, Beth"};

    cout<<"Here is the array before sorting"<<endl;
    printArray(names,NUM_NAMES);
    cout<<endl<<endl<<endl;
    selectionSort(names,NUM_NAMES);
    cout<<"Here is the array after sorting"<<endl;
    printArray(names,NUM_NAMES);
    cout<<endl<<endl;

    cout<<"Enter a name to search for: ";
    getline(cin,query);

    position = binarySearch(names,NUM_NAMES,query);

    if(position >= 0){
        cout<<"The corresponding entry was found at "<<position<<endl;
    }else{
        cout<<"The entry does not exist!"<<endl;
    }

    return 0;
}

void selectionSort(string names[], int NUM_NAMES){

    string minValue;
    int minIndex;

    for(int i = 0; i < NUM_NAMES - 1; i++){
        minValue = names[i];
        minIndex = i;
        for(int j = i + 1; j < NUM_NAMES; j++){
            if(names[j] < minValue){
                minValue = names[j];
                minIndex = j;
            }
        }

        names[minIndex] = names[i];
        names[i] = minValue;

    }

}

void printArray(string names[], int NUM_NAMES){

    for(int i = 0; i < NUM_NAMES; i++){

        cout<<names[i]<<endl;
    }
}

int binarySearch(string names[], int NUM_NAMES, string query){

    int first = 0;
    int last = NUM_NAMES-1;
    int middle;
    int position = -1;
    bool found = false;

    while(!found && first<=last){
        middle = (first + last )/2;
        if(names[middle] == query){
            found = true;
            position = middle;
        }else if(names[middle] > query){
            first = middle + 1;
        }else{
            last = middle - 1;
        }
    }

    return position;
}