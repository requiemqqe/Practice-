#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int bucks[] = {1000,500,200,100,50,20,10,5,2,1};
    int numOfBucks[10] = {0};

    for (int i = 0; i < 10; ++i) {
        while (amount >= bucks[i]) {
            ++numOfBucks[i];
            amount -= bucks[i];
        }
    }
    int minBucks = 0;
    for (int i = 0; i < 10; ++i) {
        minBucks += numOfBucks[i];
    }
    cout << "Minimal number of bucks(bills): " << minBucks << endl;
    cout << "Bucks(bills): ";

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < numOfBucks[i]; ++j) {
            cout << bucks[i] << " ";
        }
    }
    cout << endl;

    return 0;
}


