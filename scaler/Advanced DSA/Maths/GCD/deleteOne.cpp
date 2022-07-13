/* Question -
1. https://www.scaler.com/academy/mentee-dashboard/class/29489/assignment/problems/9103?navref=cl_tt_lst_sl
*/

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A)
{
    int n = A.size();
    int pre[n], back[n];
    int val = A[0];
    for (int i = 0; i < n; i++)
    {
        pre[i] = __gcd(val, A[i]);
        val = pre[i];
    }
    val = A[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        back[i] = __gcd(val, A[i]);
        val = back[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            ans = max(ans, back[i + 1]);
        else if (i == n - 1)
            ans = max(ans, pre[i - 1]);
        else
            ans = max(ans, __gcd(pre[i - 1], back[i + 1]));
    }
    return ans;
}
