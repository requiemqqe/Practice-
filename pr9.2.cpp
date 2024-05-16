#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printArray(int arr[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
        cout << "Step " << i + 1 << ": ";
        for (int k = 0; k < size; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, M;

    cout << "Enter the number of rows: ";
    cin >> N;
    cout << "Enter the number of columns: ";
    cin >> M;

    int arr[100][100];

    srand(time(NULL));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            arr[i][j] = rand() % 100;
        }
        bubbleSort(arr[i], M);
    }

    cout << "Array before sorting:\n";
    printArray(arr, N, M);

    cout << "Array after sorting:\n";
    printArray(arr, N, M);

    return 0;
}
