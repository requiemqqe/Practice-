#include <iostream>
using namespace std;

int main() {
    int numbers[] = {2, 3, 4};

    int n = sizeof(numbers) / sizeof(numbers[0]);
    int lastNum = n;

    for (int i = 0; i < n; i++) {
        if (numbers[i] >= 1 && numbers[i] <= lastNum) {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}
