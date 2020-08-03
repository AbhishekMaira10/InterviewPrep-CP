#include <bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int A)
{
  vector<string> v;
  for (int i = 1; i <= A; i++)
  {
    if (i % 15 == 0)
    {
      string s = "FizzBuzz";
      v.push_back(s);
    }
    else if (i % 3 == 0)
    {
      string s = "Fizz";
      v.push_back(s);
    }
    else if (i % 5 == 0)
    {
      string s = "Buzz";
      v.push_back(s);
    }
    else
    {
      string s = to_string(i);
      v.push_back(s);
    }
  }
  return v;
}