#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

void removeDuplicates(Node *start)
{
  unordered_set<int> seen;

  Node *curr = start;
  Node *prev = NULL;
  while (curr != NULL)
  {
    // If current value is seen before
    if (seen.find(curr->data) != seen.end())
    {
      prev->next = curr->next;
      delete (curr);
    }
    else
    {
      seen.insert(curr->data);
      prev = curr;
    }
    curr = prev->next;
  }
}