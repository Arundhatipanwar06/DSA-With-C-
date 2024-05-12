#include<iostream>
#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{
    for(int i = 1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(;j >= 0;j--)
        {
            if(arr[j] > temp)
            {
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main()
{
    vector<int>arr = {5,2,1,7,3,8,6,4,9};
    int n = arr.size();
    insertionSort(n,arr);
    cout<<"Array after sorting: ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
