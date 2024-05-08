#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> v) {
    int s = 0, e = v.size() - 1;
    int mid = (s + e) / 2;
    while (s < e) {
        if (v[mid] < v[mid + 1])
            s = mid + 1;
        else
            e = mid;
        mid = (s + e) / 2;
    }
    return s;
}

int peakIndexInMountainArray(vector<int>& arr) {
    return findPivot(arr);
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 10, 8, 6, 4, 2};
    int peakIndex = peakIndexInMountainArray(arr);
    cout << "Peak index in the mountain array is: " << peakIndex << endl;
    return 0;
}
