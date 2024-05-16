#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        cout << "Step " << i << ": ";
        printArray(arr, size);
    }
}

int main() {
    int N;

    cout << "Enter the size of the array: ";
    cin >> N;

    int* arr = new int[N];

    srand(time(NULL));

    for (int i = 0; i < N; ++i) {
        arr[i] = rand() % 100;
    }

    cout << "Array before sorting: ";
    printArray(arr, N);

    insertionSort(arr, N);

    cout << "Array after sorting: ";
    printArray(arr, N);

    delete[] arr;

    return 0;
}