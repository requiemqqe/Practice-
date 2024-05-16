#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
        cout << "Step " << i + 1 << ": ";
        printArray(arr, size);
    }
}

int main() {
    int N;

    cout << "Enter the size of the array: ";
    cin >> N;

    int* arr = new int[N];

    cout << "Enter " << N << " elements of the array:\n";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    printArray(arr, N);

    selectionSort(arr, N);

    cout << "Array after sorting: ";
    printArray(arr, N);

    delete[] arr;

    return 0;
}
