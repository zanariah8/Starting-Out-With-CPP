#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>,int);
int main(void){

    vector <int> numbers;
    int query,position;
    bool found = false;

    numbers.push_back(13579);
    numbers.push_back(26791);
    numbers.push_back(26792);
    numbers.push_back(33445);
    numbers.push_back(55555);
    numbers.push_back(62483);
    numbers.push_back(77777);
    numbers.push_back(79422);
    numbers.push_back(85647);
    numbers.push_back(93121);

    cout<<"Hello! Enter todays winning lotto number: ";
    cin>>query;


    position = binarySearch(numbers,query);

    if(position >= 0){
        cout<<"You won! Your number was in slot "<<position<<endl;
    }else{
        cout<<"You Lost!!"<<endl;
    }
}

int binarySearch(vector<int> numbers, int query){
    int first = 0;
    int last = numbers.size()-1;
    int middle;
    bool found = false;
    int position = -1;

    while(!found && first<=last){
        middle = (first + last)/2;
        if(numbers[middle] == query){
            found = true;
            position = middle;
        }else if(numbers[middle] > query){
            last = middle - 1;
        }else{
            first = middle + 1;
        }
    }

    return position;
}