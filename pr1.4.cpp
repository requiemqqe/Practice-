#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter num (!<2): ";
    cin >> number;

    int div = 2;

    while (number % div != 0) {
        div++;
    }

    cout << "Min div: " << div << endl;

    return 0;
}
