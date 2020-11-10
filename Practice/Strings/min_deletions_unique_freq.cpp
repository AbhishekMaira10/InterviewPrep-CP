#include <bits/stdc++.h>
using namespace std;

int solution(const string &s)
{
  int count = 0;

  // storing frequency of every character
  vector<int>occurrences('z' - 'a', 0);
  for(char c: s)
    ++occurrences[c - 'a'];

  priority_queue<int> pq;
  // put non zero occurrences in the priority queue
  for(int i: occurrences)
    if(i != 0)
      pq.push(i);

  while(!pq.empty()){
    int most_frequent = pq.top();
    pq.pop();
    if(pq.empty())
      return count;

    if(most_frequent == pq.top()){
      count ++;
      if(most_frequent > 1)
        pq.push(most_frequent - 1);
    }
    
  }
  return count;
}

int main(){
  cout << solution("ccaaddffecee");
  return 0;
}