#include <iostream>

using namespace std;

// Function to calculate the sum of elements in an array
int sum(int arr[], int start, int end) {
    int total = 0;
    for (int i = start; i <= end; ++i) {
        total += arr[i];
    }
    return total;
}

// Function to find the minimum time to paint the fence
int minTimeToPaint(int sections[], int n, int k) {
    // dp[i][j] stores the minimum time to paint first i sections with j painters
    int dp[n][k + 1];

    // Fill the base cases
    for (int i = 0; i < n; ++i) {
        dp[i][1] = sum(sections, 0, i);
    }

    for (int painters = 2; painters <= k; ++painters) {
        for (int i = 0; i < n; ++i) {
            int best = INT_MAX;
            for (int j = 0; j < i; ++j) {
                best = min(best, max(dp[j][painters - 1], sum(sections, j + 1, i)));
            }
            dp[i][painters] = best;
        }
    }

    return dp[n - 1][k];
}

int main() {
    int sections[] = {5, 8, 9, 2, 4, 6};
    int n = sizeof(sections) / sizeof(sections[0]);
    int k = 2;
    cout << "Minimum time to paint the fence: " << minTimeToPaint(sections, n, k) << endl;
    return 0;
}
