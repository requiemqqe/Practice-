#include <iostream>

using namespace std;

int interpolationSearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    while (low <= high && x>= arr[low] && x <= arr[high]) {
        if (low == high) {
            if (arr[low] == x)
                return low;
            return -1;
        }
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]);
        if (arr[pos] == x)
            return pos;
        if (arr[pos] < x)
            low = pos + 1;
        else high = pos - 1;
    }
    return -1;
}

int main() {
    srand(time(0));

    int choice;
    cout << "Enter num of elements in the array(1 for dynamic arr, 2 for static arr): ";
    cin >> choice;


    if (choice == 1) {
        int n;
        cout << "Enter the number of elements in the dyn arr: ";
        cin >> n;

        int *arr = new int[n];
        cout << "Enter " << n << " elements for the array:" << endl;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << "Array: ";
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;

        int value;
        cout << "Enter the value to search: ";
        cin >> value;

        int index = interpolationSearch(arr, n, value);

        if (index != -1) {
            cout << "Value " << value << " found at index " << index << endl;
        } else {
            cout << "Value " << value << " not found in the array" << endl;
        }

        delete[] arr;
    } else if (choice == 2) {
        const int arrSize = 10;
        int arr[arrSize];
        cout << "Enter " << arrSize << " elements for the array" << endl;

        for (int i = 0; i < arrSize; ++i) {
            cin >> arr[i];
        }

        sort(arr,arr + arrSize);
        cout << "Sorted array: ";
        for (int i = 0; i < arrSize; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;

        int value;
        cout << "Enter the value to search: ";
        cin >> value;

        int index = interpolationSearch(arr,arrSize,value);

        if (index != -1) {
            cout << "Value " << value << " found at index " << index << endl;
        }
        else {
            cout << "Value " << value << " not found in the array" << endl;
        }
    }

    return 0;
}