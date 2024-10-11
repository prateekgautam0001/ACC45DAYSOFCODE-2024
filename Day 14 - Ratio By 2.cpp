#include<iostream>
using namespace std;

void solve() {
  int x,y; cin>>x>>y;
  if(x>=2*y || y>=2*x) {
    cout<<0<<"\n";
    return;
  }
  if(x>y) swap(x,y);
  cout<<abs(min(2*x-y, y/2-x));
  cout<<"\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t; cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}