#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int nonZero = 0;
    for(int j = 0; j<nums.size();j++)
    {
        if(nums[j] != 0)
        {
            swap(nums[j],nums[nonZero]);
            nonZero++;
        }
    }
}

int main()
{
    int nums[6] = {0,1,0,4,8,0};
    vector<int> numsVec(nums, nums + sizeof(nums) / sizeof(nums[0]));

    moveZeroes(numsVec);

    // Print the elements of the modified vector
    cout << "Modified array: ";
    for (int i = 0; i < numsVec.size(); ++i) {
        cout << numsVec[i] << " ";
    }
    cout << endl;

    return 0;
}
