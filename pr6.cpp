#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}

void Sundaram(bool marked[], int n) {
    int nNew = (n - 2)/2;
    for (int i = 1; i <= nNew; i++) {
        for (int j = 0;(i + j + 2 * i * j) <= nNew; j++) {
            marked[i + j + 2 *  i * j] = true;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of arr(max = 10): ";
    cin >> n;

    int arr[10];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxValue = *max_element(arr, arr + n);
    cout << "Max value in arr: " << maxValue << endl;

    cout << "Prime numbers using sieve of Eratosthenes: ";
    for (int i = 2; i <= maxValue; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;

    cout << "Prime numbers using sieve of Sundaram: ";
    bool marked[100] = {false};
    Sundaram(marked, maxValue);
    for (int i = 2; i <= maxValue; i++) {
        if(!marked[i])
            cout << i << " ";
    }
    cout << endl;

    cout << "Common nums in both arrs: ";
    for (int i = 2; i <= maxValue; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if(arr[j] == i) {
                found = true;
                break;
            }
        }
        if(found && !marked[i]){
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
