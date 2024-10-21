#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,flag=0;
	    cin>>n;
	    
	    map<long long int,long long int> m;
	    for(int i=0;i<n;i++)
	    {
	        long long int a;
	        cin>>a;
	        m[a]++;
	    }
	    
	    for(auto &i:m)
	    {
	        if(i.second%i.first!=0) flag=1;
	    }
	    if(flag==1) cout<<"NO\n";
	    else cout<<"YES\n";
	}

}
