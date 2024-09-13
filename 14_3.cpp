#include <iostream>
using namespace std;
class Vehicle {
public:
    string company = "Ford";
    void type() {
        cout << "911 Mustang" << endl;
    }
};
class Specs {
public:
    string mileage = "8 kmpl";
    void colour() {
        cout << "Grey" << endl;
    }
};

class Car : public Vehicle, public Specs {
public:
    string seater = "4 seater";
};
int main() {
    Car f2;
    f2.type();      
    f2.colour();      
    cout << "Company: " << f2.company << endl;
    cout << "Mileage: " << f2.mileage << endl;
    cout << "Seater: " << f2.seater << endl;
    return 0;
}
