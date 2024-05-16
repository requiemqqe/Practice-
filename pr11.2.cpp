#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void printArray(int arr[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void insertionSort(int arr[][100], int rows, int cols) {
    for (int i = 1; i < rows; i++) {
        int key = arr[i][0];
        int j = i - 1;
        while (j >= 0 && arr[j][0] < key) {
            for (int k = 0; k < cols; ++k) {
                std::swap(arr[j][k], arr[j + 1][k]);
            }
            j--;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            int key = arr[i][j];
            int k = j - 1;
            while (k >= 0 && arr[i][k] > key) {
                arr[i][k + 1] = arr[i][k];
                k--;
            }
            arr[i][k + 1] = key;
        }
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
    }

    cout << "Array before sorting:\n";
    printArray(arr, N, M);

    insertionSort(arr, N, M);

    cout << "Array after sorting:\n";
    printArray(arr, N, M);

    return 0;
}
