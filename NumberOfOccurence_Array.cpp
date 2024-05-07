#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int mid, ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int mid, ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int even[6] = {1, 2, 3, 3, 3, 3};

    cout << "First occurrence of 3 is at index " << firstOcc(even, 6, 3) << endl;
    cout << "Last occurrence of 3 is at index " << lastOcc(even, 6, 3) << endl;

    int firstIndex = firstOcc(even, 6, 3);
    int lastIndex = lastOcc(even, 6, 3);
    int numberOfOccurrence = (lastIndex - firstIndex) + 1;

    cout << "Total number of occurrences of 3 is " << numberOfOccurrence << endl;

    return 0;
}
