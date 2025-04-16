// This code is the Example of Multi_Level_Inheritence
#include <iostream>
using namespace std;


class Vehicle {
public:
    string make;
    string model;

    
    void inputVehicleDetails() {
        cout << "Enter Vehicle Make: ";
        cin >> make;
        cout << "Enter Vehicle Model: ";
        cin >> model;
    }

    
    void displayVehicleDetails() {
        cout << "Vehicle Make: " << make << endl;
        cout << "Vehicle Model: " << model << endl;
    }
};


class Car : public Vehicle {
public:
    string fuelType;
    int seatingCapacity;

    
    void inputCarDetails() {
        cout << "Enter Fuel Type (e.g., Petrol, Diesel, Electric): ";
        cin >> fuelType;
        cout << "Enter Seating Capacity: ";
        cin >> seatingCapacity;
    }

    
    void displayCarDetails() {
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
    }
};


class ElectricCar : public Car {
public:
    int batteryCapacity;  
    int chargingTime;     

    
    void inputElectricCarDetails() {
        inputVehicleDetails();   
        inputCarDetails();      

        cout << "Enter Battery Capacity (in kWh): ";
        cin >> batteryCapacity;
        cout << "Enter Charging Time (in hours): ";
        cin >> chargingTime;
    }


    void displayElectricCarDetails() {
        displayVehicleDetails();  
        displayCarDetails();      

        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
        cout << "Charging Time: " << chargingTime << " hours" << endl;
    }
};

int main() {
    ElectricCar myElectricCar;

    
    myElectricCar.inputElectricCarDetails();

    
    cout << "\nElectric Car Details: \n";
    myElectricCar.displayElectricCarDetails();

    return 0;
}

