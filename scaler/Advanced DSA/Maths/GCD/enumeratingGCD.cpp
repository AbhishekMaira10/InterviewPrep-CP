/* Question -
 2. https://www.scaler.com/academy/mentee-dashboard/class/29489/assignment/problems/967?navref=cl_tt_lst_sl
*/

#include <bits/stdc++.h>
using namespace std;

string solve(string A, string B)
{
    stringstream ss;
    long long a, b;
    string ans;
    ss << A;
    ss >> a;
    ss << B;
    ss >> b;

    long long ans = __gcd(a, b);

    ss << ans;
    ss >> ans;
}
