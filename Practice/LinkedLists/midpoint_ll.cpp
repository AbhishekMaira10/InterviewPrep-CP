#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

Node *midPoint(Node *head)
{
  if (head == NULL || head->next == NULL)
    return head;

  Node *slow = head;
  Node *fast = head->next;

  while (fast != NULL && fast->next != NULL)
  {
    fast = fast->next->next;
    slow = slow->next;
  }
  return slow;
}
