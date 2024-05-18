#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>&nums)
{
    int count =  0 ;
    int n = nums.size();
    for(int i = 1; i<n;i++)
    {
        if(nums[i-1] > nums[i])
        {
            count++;
        }
    }
    if(nums[n-1]>nums[0])
        count++;

    return count<=1;
}

int main()
{
    // Example vectors to test the function
    vector<int> nums1 = {3, 4, 5, 1, 2};
    vector<int> nums2 = {1, 2, 3, 4, 5};
    vector<int> nums3 = {2, 1, 3, 4, 5};

    // Test and print results for each example
    cout << "Test case 1: ";
    if (check(nums1))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    cout << "Test case 2: ";
    if (check(nums2))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    cout << "Test case 3: ";
    if (check(nums3))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
