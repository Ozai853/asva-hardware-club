#include <iostream>
#include <string>

using namespace std;
int main() {

    string name;
    double voltage = 0, resistance = 0, current = 0, power = 0;
     cout << "Enter your name";
     getline (cin, name);
     cout <<"Enter voltage (V): ";
     cin >> voltage;

     cout << "Enter resistance (Ohms): ";
     cin >> resistance;

     if (resistance == 0 ) {
        cout << "Error, resistance cannot be zero." << endl;
        return 1;
     }

     current = voltage / resistance;
     power = voltage * current;


     
     cout << "\n==== Electronics Calculator ====" << endl;
     cout << "Name: " << name << endl;
     cout << "Voltage:" << voltage << "V" << endl;
     cout << "Resistance: " << resistance << "Ohms" << endl;
     cout << "Current:" << current << "A" << endl;
     cout << "Power:" << power << "W" << endl;
     cout << "========================" << endl;


     return 0; 
}

