#include <iostream>
using namespace std;

void reversedArray(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] =  arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[n - 1]) {
            return false;
        }
    }
    return true;
}

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        cout << "Left: " << left << ", Right: " << right << ", Mid: " << mid << endl;

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

    int x;
    cout << "Enter x: ";
    cin >> x;

    reversedArray(arr,10);
    cout << "Array reversed";
    if (isSorted(arr,10)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }

    int index = binarySearch(arr, 0, 9, target);

    if (index != -1) {
        cout << "Element not found " << index << " with meaning: " << arr[index] << endl;
    }
        else {
            cout << "Element not found" << endl;
        }

    return 0;
}


