#include <iostream>
#include <string>
using namespace std;
class Employee{
    private:
        string name;
        int idNumber;
        string department;
        string position;
    public:
        Employee(string name,int idNumber,string department,string position);
        Employee(string name, int idNumber);
        Employee();
        void setName(string name);
        void setidNumber(int idNumber);
        void setDepartment(string department);
        void setPosition(string position);
        string getName() const;
        int getidNumber() const;
        string getDepartment() const;
        string getPosition() const;
        void printData() const;

};

Employee::Employee(string name, int idNumber, string department, string position){
    this->name = name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
}

Employee::Employee(string name, int idNumber){
    this->name = name;
    this->idNumber = idNumber;
    department = "";
    position = "";
}

Employee::Employee(){
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}

void Employee::setName(string name){
    this->name = name;
}

void Employee::setidNumber(int idNumber){
    this->idNumber = idNumber;
}

void Employee::setDepartment(string department){
    this->department = department;
}

void Employee::setPosition(string position){
    this->position = position;
}

string Employee::getName() const{
    return name;
}

int Employee::getidNumber() const{
    return idNumber;
}

string Employee::getDepartment() const{
    return department;
}

string Employee::getPosition() const{
    return position;
}

void Employee::printData() const{
    cout<<"Employee Name: "<<name<<endl;
    cout<<"ID Number: "<<idNumber<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Position: "<<position<<endl;
}
int main(void){

    Employee susan("Susan Meyers",47899,"Accounting","Vice President");
    Employee mark("Mark Jones",39119,"IT","Programmer");
    Employee joy("Joy Rogers",81774,"Manufacturing","Engineer");

    susan.printData();
    cout<<endl<<endl;
    mark.printData();
    cout<<endl<<endl;
    joy.printData();
    cout<<endl<<endl;

    return 0;
}