#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

int indexOfNIter(Node *head, int n)
{
  Node *temp = head;
  int iter = 0;

  while (temp->data != -1)
  {
    if (temp->data == n)
      return iter;

    temp = temp->next;
    iter++;
  }
  return -1;
}
