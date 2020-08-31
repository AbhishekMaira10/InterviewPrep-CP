/*
Question - We are given the maximum occurances of ‘a’, ‘b’ and ‘c’ in a string. 
We need to make the largest length string containing only ‘a’, ‘b’ and ‘c’ 
such that no three consecutive characters are same. 

Ex:-

Input:- 3 3 3
Output:- abcabcabc
(There can be a lot of different outputs, anyone of them was accepted)

Input:- 5 5 3
Output:- aabbcaabbcabc

*/

#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, char> a, pair<int, char> b) { return a.first > b.first; }

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    /* Making vector of pairs and mapping them with their characters 
    v[0] is for "a", v[1] is for "b", v[2] is for "c"*/
    vector<pair<int, char>> v(3);
    string s;

    cin >> v[0].first >> v[1].first >> v[2].first;
    v[0].second = 'a';
    v[1].second = 'b';
    v[2].second = 'c';
    int total = v[0].first + v[1].first + v[2].first;

    while (1)
    {
      string prev = s;
      sort(v.begin(), v.end(), compare);
    }
  }
}