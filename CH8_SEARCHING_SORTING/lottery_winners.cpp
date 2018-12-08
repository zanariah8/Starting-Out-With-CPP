#include <iostream>
#include <vector>
using namespace std;
bool linearSearch(vector<int>,int);
int main(void){
    vector <int> numbers;
    int query;
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

    found = linearSearch(numbers,query);

    if(found){
        cout<<"You won!"<<endl;
    }else{
        cout<<"You Lost!"<<endl;
    }




}

bool linearSearch(vector<int> numbers, int query){

    for(int i = 0; i < numbers.size(); i++){
        if(query == numbers[i]){
            return true;
        }
    }

    return false;
}