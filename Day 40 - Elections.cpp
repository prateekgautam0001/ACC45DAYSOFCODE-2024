#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int t;
        cin>>t;
        while(t--){
            int n,x;
            cin>>n>>x;
            int a[n],b[n];
            
            for(int i=0;i<n;i++) cin>>a[i];
            for(int i=0;i<n;i++) cin>>b[i];
            
            int d[n],A=0,dI=0;
            for(int i=0;i<n;i++){
                if(a[i]>b[i]) A++;
                else d[dI++]=b[i]-a[i]+1;
            }
            if(A*2>n){
                cout<<"YES\n";
                continue;
            }
            sort(d,d+dI);
            
            for(int i=0;i<dI;i++){
                if(x>=d[i]){
                    x-=d[i];
                    A++;
                }
                else break;
            }
            if(A*2>n) cout<<"YES\n";
            else cout<<"NO\n";
        }
    return 0;
}
