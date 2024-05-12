#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        bool swapped = false;
        for(int j = 0; j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            //already sorted
            break;
        }
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 1, 2, 9, 4};

    cout << "Array before sorting: ";
    for(int num : arr) cout << num << " ";
    cout << endl;

    bubbleSort(arr, arr.size());

    cout << "Array after sorting: ";
    for(int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
