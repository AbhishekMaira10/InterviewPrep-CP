#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

void removeDuplicates(Node *head)
{

  Node *current = head;
  Node *next_next;

  if (current == NULL)
    return;

  while (current->next != NULL)
  {
    if (current->data == current->next->data)
    {
      next_next = current->next->next;
      free(current->next);
      current->next = next_next;
    }
    current = current->next;
  }
}