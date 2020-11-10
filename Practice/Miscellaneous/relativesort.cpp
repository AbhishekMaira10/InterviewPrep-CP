class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a, vector<int>& b) {
        int f[1001]={0};
        for(int i=0;i<a.size();i++)
        f[a[i]]++;
        vector<int>res;
        for(int i=0;i<b.size();i++)
        {
            for(int j=0;j<f[b[i]];j++)
            res.push_back(b[i]);
            f[b[i]]=-1;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {
            if(f[a[i]]>0)
            res.push_back(a[i]);
        }
        return res;
    }
};
