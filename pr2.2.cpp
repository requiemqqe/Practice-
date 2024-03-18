#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int x[] = {-3,4,1,7,8,-12,9,-5,34,-10};

    cout << "Array x before: ";
    printArray(x, 12);

    for (int i = 0; i < 10; ++i) {
        if (x[i] < 0) {
            x[i] = -x[i];
        }
    }

    cout << "Array x after: ";
    printArray(x, 10);

    return 0;
}

