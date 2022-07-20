#include <bits/stdc++.h>
using namespace std;

int solve(int A)
{
    while (A >= 10)
    {
        int sum = 0;
        while (A)
        {
            sum += A % 10;
            A /= 10;
        }
        A = sum;
        if (A == 1)
            return 1;
    }
    return 0;
}
