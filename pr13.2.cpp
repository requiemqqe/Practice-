#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int N;

    cout << "Input N: ";

    cin >> N;

    int* mass = new int[N];

    srand(time(0));
    for (int i = 0; i < N; i++) {
        mass[i] = rand() % 100;
    }

    cout << "Original array: ";
    for (int i = 0; i < N; i++) {
        cout << mass[i] << " ";
    }
    cout << endl;

    int evenCount = 0;
    for (int i = 0; i < N; i++) {
        if (mass[i] % 2 == 0) {
            evenCount++;
        }
    }

    int* evenNumbers = new int[evenCount];

    int index = 0;
    for (int i = 0; i < N; i++) {
        if (mass[i] % 2 == 0) {
            evenNumbers[index++] = mass[i];
        }
    }

    shellSort(evenNumbers, evenCount);

    index = 0;
    for (int i = 0; i < N; i++) {
        if (mass[i] % 2 == 0) {
            mass[i] = evenNumbers[index++];
        }
    }

    cout << "Sorted array with even numbers sorted: ";

    for (int i = 0; i < N; i++) {
        cout << mass[i] << " ";
    }
    cout << endl;

    delete[] mass;
    delete[] evenNumbers;

    return 0;
}



