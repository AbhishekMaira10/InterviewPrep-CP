#include<bits/stdc++.h>
using namespace std;
#include<vector>

int main()
{
    return 0;
}


class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {

        sort(deck.begin(), deck.end());
        deque<int> dq;
        for(int i = deck.size() -1; i >= 0; i--)
        {
            if(dq.empty()) dq.push_back(deck[i]);
            else{
                dq.push_front(dq.back());
                dq.pop_back();
                dq.push_front(deck[i]);
            }
        }

        vector<int> res(dq.begin(), dq.end());
        return res;
        
    }
};