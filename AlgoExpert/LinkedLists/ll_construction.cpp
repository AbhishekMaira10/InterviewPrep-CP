#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int value;
  Node *prev;
  Node *next;

  Node(int value);
};

// Feel free to add new properties and methods to the class.
class DoublyLinkedList
{
public:
  Node *head;
  Node *tail;

  DoublyLinkedList()
  {
    head = NULL;
    tail = NULL;
  }

  void setHead(Node *node)
  {
    // Write your code here.
  }

  void setTail(Node *node)
  {
    // Write your code here.
  }

  void insertBefore(Node *node, Node *nodeToInsert)
  {
    // Write your code here.
  }

  void insertAfter(Node *node, Node *nodeToInsert)
  {
    // Write your code here.
  }

  void insertAtPosition(int position, Node *nodeToInsert)
  {
    // Write your code here.
  }

  void removeNodesWithValue(int value)
  {
    // Write your code here.
  }

  void remove(Node *node)
  {
    // Write your code here.
  }

  bool containsNodeWithValue(int value)
  {
    Node *node = head;
     
    // Write your code here.
    return false;
  }
};
