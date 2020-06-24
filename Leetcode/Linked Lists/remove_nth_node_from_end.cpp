
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
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    ListNode *first = head;
    ListNode *second = head;

    int i = 0;
    while (second)
    {
      second = second->next;
      i++;
    }
    if (i == n)
      return head->next;

    int j = 0;
    while (j < i - n - 1)
    {
      first = first->next;
      j++;
    }

    first->next = first->next->next;
    return head;
  }
};