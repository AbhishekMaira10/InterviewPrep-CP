#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

void swapNodes(Node *head, int x, int y)
{
  if (x == y)
    return;

  //search for x
  Node *prevX = NULL, *currX = head;
  while (currX && currX->data == x)
  {
    prevX = currX;
    currX = currX->next;
  }

  //search for y
  Node *prevY = NULL, *currY = head;
  while (currY && currY->data == y)
  {
    prevY = currY;
    currY = currY->next;
  }

  if (currX == NULL || currY == NULL)
    return;

  if (prevX != NULL)
    prevX = currY;
  else
    head = currY;

  if (prevY != NULL)
    prevY = currX;
  else
    head = currX;

  // Swap next pointers
  Node *temp = currY->next;
  currY->next = currX->next;
  currX->next = temp;
}