#include <iostream>
#include <string>
using namespace std;
class Car{
    private:
        int yearModel;
        string make;
        int speed;
    public:
        Car(int yearModel,string make);
        int getyearModel() const;
        string getMake() const;
        int getSpeed() const;
        void accelerate();
        void brake();
};

Car::Car(int yearModel, string make){
    this->yearModel = yearModel;
    this->make = make;
    speed = 0;
}

int Car::getyearModel() const{
    return yearModel;
}

string Car::getMake() const{
    return make;
}

int Car::getSpeed() const{
    return speed;
}

void Car::accelerate(){
    speed += 5;
}

void Car::brake(){
    speed -= 5;
}
int main(void){

    Car myCar(2012,"Honda Accord");
    cout<<"The car you are driving is a "<<myCar.getyearModel()<<" "<<myCar.getMake()<<endl;

    cout<<"Accelerating!"<<endl;
    myCar.accelerate();
    cout<<"The current speed is "<<myCar.getSpeed()<<endl;
    
    cout<<"Accelerating!"<<endl;
    myCar.accelerate();
    cout<<"The current speed is "<<myCar.getSpeed()<<endl;

    cout<<"Accelerating!"<<endl;
    myCar.accelerate();
    cout<<"The current speed is "<<myCar.getSpeed()<<endl;

    cout<<"Accelerating!"<<endl;
    myCar.accelerate();
    cout<<"The current speed is "<<myCar.getSpeed()<<endl;

    cout<<"Accelerating!"<<endl;
    myCar.accelerate();
    cout<<"The current speed is "<<myCar.getSpeed()<<endl;

    cout<<"Braking!"<<endl;
    myCar.brake();
    cout<<"The current speed is "<<myCar.getSpeed()<<endl;

    cout<<"Braking!"<<endl;
    myCar.brake();
    cout<<"The current speed is "<<myCar.getSpeed()<<endl;

    cout<<"Braking!"<<endl;
    myCar.brake();
    cout<<"The current speed is "<<myCar.getSpeed()<<endl;

    cout<<"Braking!"<<endl;
    myCar.brake();
    cout<<"The current speed is "<<myCar.getSpeed()<<endl;

    cout<<"Braking!"<<endl;
    myCar.brake();
    cout<<"The current speed is "<<myCar.getSpeed()<<endl;

    return 0;

}