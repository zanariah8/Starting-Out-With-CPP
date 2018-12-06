//Write a program that lets the user enter a charge account number
//The program should determine if the number is valid by checking 
//for it in the following list
#include <iostream>
using namespace std;
bool linearSearch(int[],int,int);
int main(void){

    int accounts[18]={5658845,4520125,7895122,8777541,8451277,1302850,
                      8080152,4562555,5552012,5050552,7825877,1250255,
                      1005231,6545231,3852085,7576651,7881200,4581002};

    int query = 0;
    cout<<"Enter the account number you would like to search for: ";
    cin>>query;
    bool found = linearSearch(accounts,18,query);
    
    if(found){
        cout<<"The account exists in the database!"<<endl;
    }else{
        cout<<"The account DNE!!"<<endl;
    }
    
}

bool linearSearch(int accounts[], int size, int query){

    for(int i = 0; i < size; i++){
        if(query == accounts[i]){
            return true;
        }
    }

    return false;
}