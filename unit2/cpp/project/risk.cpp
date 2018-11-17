#include <iostream>
using namespace std;

int main() {
    float a;
    float b;
    float c;
    float d;
    string food;
    cout << "What food is being investigated? ";
    cin >> food;
    cout << food << endl;
    cout << "How many people ate " << food << " and got sick? ";
    cin >> a;
    cout << a << endl;
    cout << "How many people ate " << food << " and did NOT get sick? ";
    cin >> b;
    cout << b << endl;
    cout << "How many people did NOT eat " << food << " and got sick? ";
    cin >> c;
    cout << c << endl;
    cout << "How many people did NOT eat " << food << " and did NOT get sick? ";
    cin >> d;
    cout << d << endl;
    cout << "The relative risk of " << food << " is:" << endl;
    float riskExposed = a / (a + b);
    float riskUnexposed = c / (c + d);
    float relativeRisk = riskExposed / riskUnexposed;
    cout << relativeRisk << endl;
}
