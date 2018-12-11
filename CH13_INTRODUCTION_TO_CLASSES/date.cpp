#include <iostream>
using namespace std;
class Date{
    private:
        int month;
        int day;
        int year;
    public:
        Date();
        void printdateNums();

};

Date::Date(){
    month = 12;
    day = 14;
    year = 2018;
}

void Date::printdateNums(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}
int main(void){

    Date myDate;

    myDate.printdateNums();

    return 0;
}