#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter nums of послідовності Фібоначчі: ";
    cin >> n;

    int a = 0, b = 1, c;

    cout << "Послідовність Фібоначчі:" << endl;
    cout << a << " " << b << " ";

    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    cout << endl;

    return 0;
}
