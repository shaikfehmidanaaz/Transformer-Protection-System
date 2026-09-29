#include <iostream>
using namespace std;

class TransformerProtection {
private:
    float temperature;
    float current;
    float voltage;

    const float MAX_TEMPERATURE = 90.0;
    const float MAX_CURRENT = 10.0;
    const float MAX_VOLTAGE = 250.0;

public:
    void readParameters() {
        cout << "Enter transformer temperature (°C): ";
        cin >> temperature;

        cout << "Enter transformer current (A): ";
        cin >> current;

        cout << "Enter transformer voltage (V): ";
        cin >> voltage;
    }

    void checkProtection() {
        bool fault = false;

        cout << "\n===== Transformer Protection System =====\n";

        cout << "Temperature : " << temperature << " °C\n";
        cout << "Current     : " << current << " A\n";
        cout << "Voltage     : " << voltage << " V\n";

        if (temperature > MAX_TEMPERATURE) {
            cout << "\nFAULT: Over-temperature detected!\n";
            fault = true;
        }

        if (current > MAX_CURRENT) {
            cout << "FAULT: Over-current detected!\n";
            fault = true;
        }

        if (voltage > MAX_VOLTAGE) {
            cout << "FAULT: Over-voltage detected!\n";
            fault = true;
        }

        if (fault) {
            cout << "\nProtection Status : ACTIVATED\n";
            cout << "Transformer       : DISCONNECTED\n";
            cout << "Alarm             : ON\n";
        } else {
            cout << "\nProtection Status : NORMAL\n";
            cout << "Transformer       : CONNECTED\n";
            cout << "Alarm             : OFF\n";
        }
    }
};

int main() {
    TransformerProtection transformer;

    cout << "====================================\n";
    cout << "     TRANSFORMER PROTECTION SYSTEM\n";
    cout << "====================================\n";

    transformer.readParameters();
    transformer.checkProtection();

    return 0;
}
