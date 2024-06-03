#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void shellSort(int arr[], int n) {
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i += 1) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
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

    shellSort(mass, N);

    cout << "Sorted array: ";

    for (int i = 0; i < N; i++) {
        cout << mass[i] << " ";
    }
    cout << endl;

    delete[] mass;

    return 0;
}
