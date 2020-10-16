#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

void printReverse(Node *head)
{
  if(head == NULL)
    return;

  printReverse(head -> next);
  cout << head ->data << " ";
}