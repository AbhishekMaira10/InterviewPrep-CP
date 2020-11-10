#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--) {
    long int n,k;
    int sum = 0,c;
    cin >> n >> k;
    for(long int i = 0;i < n;i++) {
      cin >> c;
      if(sum > 0){
        if(i%2 == 0)
          sum+=c;
        else
          sum-=c;
      }
      else{
        if(i%2 == 0)
          sum-=c;
        else
          sum+=c;
      }
    }
    cout << ((abs(sum)>=k)?"1":"2") << '\n';
  }
}

