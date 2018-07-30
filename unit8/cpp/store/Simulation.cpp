#include <iostream>
#include <vector>
using namespace std;

bool simulateSale(Store& store, string purchase) {
    vector<string> data;
    string holder = "";
    for (int i = 0; i < purchase.size(); i++) {
        char c = purchase[i];
        if (c == ',') {
            data.push_back(holder);
            holder = "";
        } else {
            holder += c;
        }
    }
    data.push_back(holder);
    string id = data[0];
    int amount = stoi(data[1]);
    double payment = stod(data[2]);
    return store.sell(id, amount, payment);
}

int main() {
    // TODO: Create stores for both order plans

    // Read in simulated purchase data
    while (!cin.fail()) {
        string purchase;
        getline(cin, purchase);
        if (purchase.empty()) {
            break;
        }
        // TODO: Replace with your store objects
        // bool wasSold = simulateSale(store, purchase);
    }

    // TODO: summarize results
}
