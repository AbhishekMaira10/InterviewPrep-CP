#include <iostream>
using namespace std;

class ListNode
{
public:
  int data;
  ListNode *next;
  ListNode(int data)
  {
    this->data = data;
    next = NULL;
  }
};

class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    if (l1 == NULL)
      return l2;
    if (l2 == NULL)
      return l1;

    ListNode *dummy = new ListNode(0);
    ListNode *curr = dummy;

    int carry = 0;
    int digit, n1, n2;

    while (l1 != NULL or l2 != NULL)
    {
      if (l1 != NULL)
        n1 = 0;
      else
        n1 = l1->data;

      if (l2 == NULL)
        n2 = 0;
      else
        n2 = l2->data;

      digit = n1 + n2 + carry;
      carry = digit / 10;
      digit = digit % 10;

      ListNode *n = new ListNode(digit);

      curr->next = n;
      curr = curr->next;

      if (l1 != NULL)
        l1 = l1->next;

      if (l2 != NULL)
        l2 = l2->next;
    }

    if (l1 == NULL and l2 == NULL and carry == 1)
    {
      ListNode *n = new ListNode(carry);
      curr->next = n;
      curr = curr->next;
    }
    return dummy->next;
  }
};