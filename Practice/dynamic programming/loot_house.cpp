#include <bits/stdc++.h>
using namespace std;

int getMaxMoney(int arr[], int n) {
    int dp[n];
    dp[0] = arr[0];
    dp[1] = arr[1];

    for (int i = 2; i < n; i++) {
        if (i - 3 < 0)
            dp[i] = arr[i] + dp[i - 2];
        else
        {
            dp[i] = arr[i] + max(dp[i - 2], dp[i - 3]);
        }
    }
    return max(dp[n - 1], dp[n - 2]);
}
