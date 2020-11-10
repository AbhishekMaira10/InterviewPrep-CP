#include <bits/stdc++.h>
using namespace std;

//iterative solution
string countAndSay(int A)
{
  string s = "1";
  while (--A)
  {
    int count = 1;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
      if (i + 1 >= s.size() || s[i] != s[i + 1])
      {
        ans += to_string(count) + s[i];
        count = 1;
      }
      else
        count++;
    }
    s = ans;
  }
  return s;
}