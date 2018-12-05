#include <iostream>
#include <string>
using namespace std;
double getSales(string);
void findHighest(double,double,double,double);
int main(void){

    double northeastTotal, southeastTotal, northwestTotal, southwestTotal;
    northeastTotal = getSales("Northeast");
    southeastTotal = getSales("Southeast");
    northwestTotal = getSales("Northwest");
    southwestTotal = getSales("Southwest");
    findHighest(northeastTotal,southeastTotal,northwestTotal,southwestTotal);

    return 0;
}

double getSales(string divisionName){
    double total = -1.0;

    while(total < 0){
        cout<<"Enter the sales total for the "<<divisionName<<" division: ";
        cin>>total;
    }

    return total;
}

void findHighest(double northeastTotal,double southeastTotal,double northwestTotal,double southwestTotal){
    double highest;

    if(northeastTotal < southeastTotal){
        highest = southeastTotal;
    }

    if(southeastTotal < northwestTotal){
        highest = northwestTotal;
    }

    if(northwestTotal < southwestTotal){
        highest = southwestTotal;
    }

    cout<<"The highest grossing division had a sales figure of "<<highest<<endl;
}