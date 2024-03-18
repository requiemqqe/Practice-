#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int  size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int X[] = {-3,4,1,7,8,-12,9,-5,34,-10};
    int Y[10];
    int M = 5;
    int yIndex = 0;

    cout << "array x: ";
    printArray(X,10);
    cout << "M = " << M << endl;

    for (int i = 0; i < 10; ++i) {
        if (abs(X[i]) > M) {
            Y[yIndex++] = X[i];
        }
    }
    cout << "array Y: ";
    printArray(Y,yIndex);

    return 0;
}