#include <iostream>
#include <string>
using namespace std;
void getRainfall(double[],string[],int);
void dualSort(double[],string[],int);

int main(void){
    string months[12]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    double rainfall[12];
}

//Insert rainfall for each month into the rainfall array
void getRainfall(double rainfall[], string months[], int size){
    
    for(int i = 0; i < size; i++){
        cout<<"Enter the rainfall for "<<months[i]<<": ";
        cin>>rainfall[i];
    }

    return;
}

//Sort two parallel arrays (rainfall and months) in descending order
//based on the values contained in rainfall.
void dualSort(double rainfall[], string months[], int size){

    int maxIndex;
    double maxValue;
    string tempMonth="";

    for(int i = 0; i < size -1; i++){
        maxIndex = i;
        tempMonth = months[i];
        maxValue = rainfall[i];

        for(int j = i + 1; j < size; j++){
            if(rainfall[j] > maxValue){
                maxValue = rainfall[j];
                tempMonth = months[j];
                maxIndex = j;
            }
        }

        rainfall[maxIndex] = rainfall[i];
        months[maxIndex] = months[i];
        rainfall[i] = maxValue;
        months[i] = tempMonth;

    }

}