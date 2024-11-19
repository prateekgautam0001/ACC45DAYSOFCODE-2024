#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    map<int,int> m;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        m[v[i]]++;
	    }
	    int mx=INT_MIN;
	    for(auto x:m)
	        mx=max(mx,x.second);
	    cout<<n-mx<<endl;
	        
	}
	return 0;
}
