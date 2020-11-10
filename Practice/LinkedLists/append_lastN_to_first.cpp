#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

Node *append_LinkedList(Node *head, int n)
{
  Node *temp = head;
  int count = 0;
  int count1 = 1;
  
  // counting the number of nodes
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }

  temp = head;
  while (count1 < count - n)
  {
    count1++;
    temp = temp->next;
  }

  Node *temp1 = temp->next;
  temp->next = NULL;
  temp = temp1;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = head;
  head = temp1;

  return head;
}