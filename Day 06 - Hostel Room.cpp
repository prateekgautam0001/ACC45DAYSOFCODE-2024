#include <bits/stdc++.h>
using namespace std;

int main() {
   	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int maxi=x;
	    int sum=x;
	    for(int i=0;i<n;i++){
	        sum=sum+a[i];
	        maxi=max(sum,maxi);
	        
	        if(sum<0){
	            sum=x;
	        }
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}
