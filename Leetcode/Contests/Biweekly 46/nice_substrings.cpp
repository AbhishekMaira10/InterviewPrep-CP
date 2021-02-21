// ques - (https://www.geeksforgeeks.org/smallest-substring-with-each-letter-occurring-both-in-uppercase-and-lowercase/)

#include <bits/stdc++.h>
using namespace std;

bool balanced(int small[], int caps[])
{

  for (int i = 0; i < 26; i++)
  {

    if (small[i] != 0 && (caps[i] == 0))
      return 0;

    else if ((small[i] == 0) && (caps[i] != 0))
      return 0;
  }
  return 1;
}

void smallestBalancedSubstring(string s)
{

  int small[26];

  int caps[26];

  memset(small, 0, sizeof(small));
  memset(caps, 0, sizeof(caps));

  for (int i = 0; i < s.length(); i++)
  {

    if (s[i] >= 65 && s[i] <= 90)
      caps[s[i] - 'A']++;
    else
      small[s[i] - 'a']++;
  }

  unordered_map<char, int> mp;
  for (int i = 0; i < 26; i++)
  {

    if (small[i] && !caps[i])
      mp[char(i + 'a')] = 1;

    else if (caps[i] && !small[i])
      mp[char(i + 'A')] = 1;
  }

  memset(small, 0, sizeof(small));
  memset(caps, 0, sizeof(caps));

  int i = 0, st = 0;

  int start = -1, end = -1;

  int minm = INT_MAX;

  while (i < s.length())
  {
    if (mp[s[i]])
    {

      while (st < i)
      {

        if (s[st] >= 65 && s[st] <= 90)
          caps[s[st] - 'A']--;
        else
          small[s[st] - 'a']--;

        st++;
      }
      i += 1;
      st = i;
    }
    else
    {

      if (s[i] >= 65 && s[i] <= 90)
        caps[s[i] - 'A']++;
      else
        small[s[i] - 'a']++;

      while (1)
      {

        if (s[st] >= 65 && s[st] <= 90 && caps[s[st] - 'A'] > 1)
        {
          caps[s[st] - 'A']--;
          st++;
        }
        else if (s[st] >= 97 && s[st] <= 122 && small[s[st] - 'a'] > 1)
        {
          small[s[st] - 'a']--;
          st++;
        }
        else
          break;
      }

      if (balanced(small, caps))
      {

        if (minm > (i - st + 1))
        {

          minm = i - st + 1;
          start = st;
          end = i;
        }
      }
      i += 1;
    }
  }

  if (start == -1 || end == -1)
    cout << "" << endl;

  else
  {

    string ans = "";
    for (int i = start; i <= end; i++)
      ans += s[i];
    cout << ans << endl;
  }
}
