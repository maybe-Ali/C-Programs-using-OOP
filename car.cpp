#include<iostream>
#include<string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    bool isRunning;

public:
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        isRunning = false; 
    }

    void start() {
        if (!isRunning) {
            isRunning = true;
            cout << brand << " " << model << " has started." << endl;
        } else {
            cout << brand << " " << model << " is already running!" << endl;
        }
    }

    void stop() {
        if (isRunning) {
            isRunning = false;
            cout << brand << " " << model << " has stopped." << endl;
        } else {
            cout << brand << " " << model << " is already off!" << endl;
        }
    }

    void accelerate() {
        if (isRunning) {
            cout << brand << " " << model << " is accelerating!" << endl;
        } else {
            cout << brand << " " << model << " can't accelerate because it's not started." << endl;
        }
    }

    void brake() {
        if (isRunning) {
            cout << brand << " " << model << " is braking!" << endl;
        } else {
            cout << brand << " " << model << " is not moving." << endl;
        }
    }

    void displayDetails() {
        cout << "\n=================================================================" << endl;
        cout << "Car Details: " << brand << " " << model << " (" << year << ")" << endl;
        cout << "=================================================================" << endl;
    }
};

int main() {
    Car car1("Toyota", "Corolla", 2020);
    Car car2("Honda", "Civic", 2018);

    car1.displayDetails();

    int choice;
    cout << "Press 1 to Start the Engine\nPress 0 to Keep Engine Off: ";
    cin >> choice;

    if (choice == 1) {
        car1.start();
        car1.accelerate();
        car1.brake();
        car1.stop();
    } else {
        car1.accelerate();
        car1.brake();
    }

    cout << endl;

    car2.displayDetails();
    car2.accelerate(); 
    car2.start();
    car2.brake();
    car2.stop();

    return 0;
}
