//cpp code to illustrate the deque data structure and its functions

#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*Deque or Double ended queues are sequence containers with the feature
    of expansion and contraction on both the ends. They are similar to vectors,
    but are more efficient in case of insertion and deletion of elements at the end,
    and also the beginning*/
    deque<int> mydeque{1,2,3,4,5};

    /*push_front() function is used to push elements into a deque from the front.
    The new value is inserted into the deque at the beginning, before the current
    first element and the container size is increased by 1.*/
    mydeque.push_front(6);

    /*pop_front() function is used to pop or remove elements from a deque from the front.
    The value is removed from the deque from the beginning, and the container size is decreased by 1.*/
    mydeque.pop_front();

    /*pop_back() function is used to pop or remove elements from a deque from the back.
    The value is removed from the deque from the end, and the container size is decreased by 1.*/
    mydeque.pop_back(); 

    //output
    for (auto i = mydeque.begin(); i != mydeque.end(); ++i)
        cout<<*i<<" ";
    cout<<endl;
    
    return 0;
}
