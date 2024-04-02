#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter elements n: ";
    cin >> n;

    double sum = 0;
    double term = 1;

    for (int i = 0; i < n; i++) {
        cout << term << " ";
        sum += term;
        term /= -2;
    }

    cout << "\n Sum of first " << n << " elements in row: " << sum << endl;

    return 0;
}
