#include <iostream>
#include <string>

using namespace std;

class Transport {
protected:
    string fuel;

public:
    Transport(string fuel) : fuel(fuel) {}

    void accelerate() {
        cout << "Accelerating..." << endl;
    }

    void brake() {
        cout << "Braking..." << endl;
    }
};

class Truck : public Transport {
private:
    double cargoWeight;
    int year;

public:
    Truck(string fuel, double cargoWeight, int year) : Transport(fuel), cargoWeight(cargoWeight), year(year) {}

    void displayInfo() {
        cout << "Truck Information:" << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Cargo Weight: " << cargoWeight << " tons" << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Truck truck("Electric", 18, 2022);

    truck.accelerate();
    truck.brake();

    truck.displayInfo();

    return 0;
}

