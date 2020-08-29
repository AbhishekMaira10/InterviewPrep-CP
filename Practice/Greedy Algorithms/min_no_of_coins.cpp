#include <bits/stdc++.h>
using namespace std;

void findMin(int v)
{
  int deno[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
  int n = sizeof(deno) / sizeof(deno[0]);

  sort(deno, deno + n);
  vector<int> ans;

  for (int i = n - 1; i >= 0; i++)
  {

    while (v >= deno[i])
    {
      v -= deno[i];
      ans.push_back(deno[i]);
    }
  }

  cout << ans.size() << endl;
}