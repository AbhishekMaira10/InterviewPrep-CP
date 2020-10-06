#include <bits/stdc++.h>
#include "Node.h"
using namespace std;


Node *deleteNode(Node *head, int i)
{
  if(head == NULL)
    return head;
  //delete head
  if (i == 0)
    return head -> next;
  
  int c = 0;
  Node *temp = head;

    while(temp != NULL && c < i - 1){
      c++;
      temp = temp -> next;
    }

  if(temp == NULL || temp -> next == NULL)
    return head;

    Node*ptr = temp -> next;
    temp -> next = ptr -> next;
    delete ptr;
    return head;
}