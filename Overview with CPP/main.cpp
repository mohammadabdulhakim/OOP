#include<iostream>
using namespace std;

// Classes
class Car {

    public:
    // Properties
    string brand;
    string model;
    int year; 

    // Methods
    void showCarInfo(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "=======================" << endl;
    }
};

int main (){
    // Objects
    Car car1;
    Car car2;

    car1.brand = "Marcedes";
    car1.model = "C180";
    car1.year = 2020;

    car2.brand = "Nissan";
    car2.model = "Sunny";
    car2.year = 2008;

    car1.showCarInfo();
    car2.showCarInfo();


    return 0;
}