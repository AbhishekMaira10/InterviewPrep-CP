/* Question -
 5. Pair Sum divisible by M
*/

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B)
{
    unordered_map<int, int> freq;

    for (int i = 0; i < A.size(); i++)
        freq[A[i] % B]++;

    for (auto x : freq)
    {
    }
}
