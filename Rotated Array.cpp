#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>&nums, int k)
{
    int n = nums.size();
    vector<int> temp(n);
    for(int i = 0; i<n;i++)
    {
        temp[(i+k) % n] = nums[i];
    }
    nums = temp;
}

int main()
{
     vector<int> nums = {1, 4, 2, 5, 7};
    int k = 2;  // Rotation amount

    // Print original vector
    cout << "Original vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Rotate the vector
    rotate(nums, k);

    // Print rotated vector
    cout << "Rotated vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

