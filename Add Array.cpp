#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v) {

    int s = 0;
    int e = v.size()-1;

    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;

    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

     // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }

     // third case
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    //print(ans);
    return reverse(ans);
}

int main() {
    // Test case 1
    vector<int> a1 = {1, 2, 3};
    vector<int> b1 = {4, 5, 6};
    vector<int> result1 = findArraySum(a1, a1.size(), b1, b1.size());
    cout << "Test case 1 result: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    // Test case 2
    vector<int> a2 = {9, 9, 9};
    vector<int> b2 = {1};
    vector<int> result2 = findArraySum(a2, a2.size(), b2, b2.size());
    cout << "Test case 2 result: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    // Test case 3
    vector<int> a3 = {0};
    vector<int> b3 = {0};
    vector<int> result3 = findArraySum(a3, a3.size(), b3, b3.size());
    cout << "Test case 3 result: ";
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    // Test case 4
    vector<int> a4 = {3, 4};
    vector<int> b4 = {7, 8, 9};
    vector<int> result4 = findArraySum(a4, a4.size(), b4, b4.size());
    cout << "Test case 4 result: ";
    for (int num : result4) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
