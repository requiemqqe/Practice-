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

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
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

    srand(time(NULL));

    for (int i = 0; i < N; ++i) {
        arr[i] = rand() % 100;
    }

    cout << "Array before sorting: ";
    printArray(arr, N);

    bubbleSort(arr, N);

    cout << "Array after sorting: ";
    printArray(arr, N);

    delete[] arr;

    return 0;
}
