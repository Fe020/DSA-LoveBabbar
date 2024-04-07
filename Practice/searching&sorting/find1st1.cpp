//Given a sorted array containing only 0s and 1s, find the transition point, i.e., the first index where 1 was observed, and before that, only 0 was observed.
//concept-binary search
#include <iostream>

int transitionPoint(int arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int i = (s + e) / 2;

        if (arr[i] == 1) {
            e = i - 1;
        } else if (arr[i] == 0) {
            s = i + 1;
        }
    }

    if (e < s && e < n - 1) {
        return s;
    } else {
        return -1;
    }
}

int main() {
    int arr[] = {0, 0, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = transitionPoint(arr, n);

    if (result != -1) {
        std::cout << "Transition point is at index: " << result << std::endl;
    } else {
        std::cout << "No transition point found." << std::endl;
    }

    return 0;
}
