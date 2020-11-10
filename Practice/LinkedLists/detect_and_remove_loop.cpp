#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

void removeLoop(Node *slow_p, Node *head)
{ 
}

int detectAndRemoveLoop(Node *head)
{
  Node *slow_p = head;
  Node *fast_p = head;

  while (slow_p && fast_p && fast_p->next)
  {
    slow_p = slow_p->next;
    fast_p = fast_p->next->next;

    if (slow_p == fast_p)
    {
      removeLoop(slow_p, head);

      return 1;
    }
  }
  return 0;
}