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

void shakerSort(int arr[], int size) {
    bool swapped = true;
    int start = 0;
    int end = size - 1;

    while (swapped) {
        swapped = false;

        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }

        end--;

        for (int i = end; i > start; --i) {
            if (arr[i] < arr[i - 1]) {
                swap(arr[i], arr[i - 1]);
                swapped = true;
            }
        }

        start++;
    }
}

int main() {
    int N;

    cout << "Enter the size of the array: ";
    cin >> N;

    int* arr = new int[N];

    srand(time(NULL));

    for (int i = 0; i < N; ++i) {
        arr[i] = rand() % 101;
    }

    cout << "Array before sorting: ";
    printArray(arr, N);

    shakerSort(arr, N);

    cout << "Array after sorting: ";
    printArray(arr, N);

    for (int i = 0; i < N; ++i) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3;
        } else {
            arr[i] -= 3;
        }
    }

    cout << "Array after shifting: ";
    printArray(arr, N);

    delete[] arr;

    return 0;
}
