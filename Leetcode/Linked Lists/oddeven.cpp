struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *oddEvenList(ListNode *head)
  {
    if (!head)
      return head;
    ListNode *odd = head;
    ListNode *even = head->next;
    ListNode *evenhead = even;

    while (even && even->next)
    {
      //connecting odd nodes
      odd->next = even->next;
      odd = even->next;

      even->next = odd->next;
      even = odd->next;
    }
    //connecting ven list to odd list
    odd->next = evenhead;
    return head;
  }
};