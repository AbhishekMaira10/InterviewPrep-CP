#include <iostream>
#include <vector>
#define ull unsigned long long
using namespace std;

int main() {
    ull t,n;
    cin>>t;
    while(t--) {
        cin>>n; 
        ull person=0,days=0;
        vector<ull> a(n);
        for(ull i=0;i<n;i++) cin>>a[i];
        for(ull i=1;i<n;i++) a[i]+=a[i-1];
        while (person<n-1) {
            person+=a[person];
            days+=1;
        }
        cout<<days<<endl;
    }
}
