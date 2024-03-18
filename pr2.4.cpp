#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {6, 7, 8, 9, 10};
    int C[10];

    cout << "Array A: ";
    printArray(A, 5);
    cout << "Array B: ";
    printArray(B, 5);

    int indexA = 0;
    int indexB = 0;
    int indexC = 0;

    while (indexA < 5 && indexB < 5) {
        if (A[indexA] < B[indexB]) {
            C[indexC++] = A[indexA++];
        } else {
            C[indexC++] = B[indexB++];
        }
    }

    while (indexA < 5) {
        C[indexC++] = A[indexA++];
    }

    while (indexB < 5) {
        C[indexC++] = B[indexB++];
    }

    cout << "Array C: ";
    printArray(C, indexC);

    return 0;
}
