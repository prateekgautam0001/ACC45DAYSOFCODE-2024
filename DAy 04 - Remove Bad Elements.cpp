#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t,n,num,mc,i;
    for(cin>>t;t--;){
        cin>>n;
        unordered_map<int,int> m;
        for(mc=0,i=0;i<n;++i)
            cin>>num,
            mc = max(mc,++m[num]);
        cout<<n-mc<<endl;
    }
    return 0;
}