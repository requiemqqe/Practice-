#include <iostream>
using namespace std;

int main() {
     const int arrSize = 10;
     int arr[arrSize];

     cout << "Enter " << arrSize << " nums of array: ";
    for (int i = 0; i < arrSize; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter num which you want to found: ";
    cin >> target;

    int index = -1; // інндекс якщо елемент не знайдено.

    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    if(index != -1) {
        cout << "Element " << target << " found on position: " << index;
    } else {
        cout << "Element " << target << "not found.";
    }

    return 0;
}
