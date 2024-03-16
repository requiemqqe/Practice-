#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[10];
    cout << "Enter 10 nums:" << endl;

    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }

    cout << "Enter num for search:" << endl;
    int target;
    cin >> target;

    int index = binarySearch(arr, 0, 9, target);

    if (index != -1) {
        cout << "Element not found " << index << " with meaning: " << arr[index] << endl;
    }
        else {
            cout << "Element not found" << endl;
        }

    return 0;
}


