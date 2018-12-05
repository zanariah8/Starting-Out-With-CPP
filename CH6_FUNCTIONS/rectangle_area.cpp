#include <iostream>
using namespace std;
double getLength();
double getWidth();
double getArea(double,double);
void displayData(double,double,double);
int main(void){

    double length = getLength();
    double width = getWidth();
    double area = getArea(length,width);
    displayData(length,width,area);

    return 0;
}

double getLength(){
    double length = 0;
    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    return length;
}

double getWidth(){
    double width = 0;
    cout<<"Enter the width of the rectangle: ";
    cin>>width;
    return width;
}

double getArea(double length, double width){

    return length * width;
}

void displayData(double length, double width, double area){
    cout<<endl<<endl;

    cout<<"The length of the rectangle is: "<<length<<endl;
    cout<<"The width of the rectangle is: "<<width<<endl;
    cout<<"The area of the recangle is: "<<area<<endl;
}

