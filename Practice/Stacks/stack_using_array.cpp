#include <climits>
#include <iostream>
using namespace std;

class StackUsingArray
{
  int *data;
  int nextIndex;
  int capacity;

public:
  StackUsingArray(int totalSize)
  {
    data = new int[totalSize];
    nextIndex = 0;
    capacity = totalSize;
  }

  //return the number of elements present in the stack
  int size()
  {
    return nextIndex;
  }

  bool isEmpty()
  {
    return nextIndex == 0;
  }

  //insert element
  void push(int element)
  {
    if (nextIndex == capacity)
    {
      cout << "Stack is full" << endl;
      return;
    }
    data[nextIndex++] = element;
  }

  //delete element
  int pop()
  {
    if (isEmpty())
    {
      cout << "Stack is empty" << endl;
      return INT_MIN;
    }
    return data[--nextIndex];
  }

  // return top most element
  int top()
  {
    if (isEmpty())
    {
      cout << "Stack is empty" << endl;
      return INT_MIN;
    }
    return data[nextIndex - 1];
  }
};