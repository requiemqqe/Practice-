#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3};

    int n = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            int currentNum = nums[i];
            int minNum = currentNum;
            int maxNum = currentNum;

            if (i + 1 < n) {
                int nextNumber = nums[i + 1];
                minNum = min(currentNum, nextNumber);
                maxNum = max(currentNum, nextNumber);
            }

            cout << "For" << i << " even num:" << endl;
            cout << "Min num: " << minNum << endl;
            cout << "Max num: " << maxNum << endl;
        }
    }

    return 0;
}