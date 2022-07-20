#include <bits/stdc++.h>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    // Naive Approach

    int firstOccurence = -1;
    int lastOccurence = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            if (firstOccurence == -1)
            {
                firstOccurence = i;
                lastOccurence = i;
            }
        }
    }
}