#include<bits/stdc++.h>

using namespace std;

int main(){
  int t,n,sum;
  long int c;
  //vector<int> a;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n>>c;
    sum=0;
    //a.clear();
    for(int j=0;j<n;j++){
      int temp;
      cin>>temp;
      sum+=temp;
    }
    //cout<<sum<<"\n\n";
    if(sum>c){
      cout<<"No\n";
    }
    else{
      cout<<"Yes\n";
    }
  }
}
