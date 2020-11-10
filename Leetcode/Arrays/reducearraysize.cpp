#include<bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int> v;
        map<int,int> mp;

        for(int i = 0; i < arr.size(); i++)
            mp[arr[i]]++;
            
        for(auto it = mp.begin(); it != mp.end(); it++)
           v.push_back(it->second);

        sort(v.begin(), v.end());

        int freq = 0;
        int k = v.size()-1;
        while(freq < arr.size()/2) {
            freq += v[k];
            k--;
        }

        if(v.size() == 1) {
            return 1;
        }

        int ans = v.size()-1-k;
        return ans;

    }
};
