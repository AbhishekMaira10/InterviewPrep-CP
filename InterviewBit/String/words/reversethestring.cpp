#include <bits/stdc++.h>
using namespace std;

class Solution
{
  string solve(string a)
  {
    int n = a.size();
    string ans = "";
    if (n == 0)
      return ans;
    string temp = "";
    int i = n - 1;
    while (i >= 0)
    {
      if (a[i] != ' ')
      {
        while (a[i] != ' ' && i >= 0)
        {
          temp += a[i];
          i--;
        }
        reverse(temp.begin(), temp.end());
        if (i > 0)
          ans += temp + " ";
        else
          ans += temp;
        temp = "";
      }
      else
        i--;
    }
    if (ans[ans.size() - 1] == ' ')
      ans.pop_back();
    return ans;
  }
};
