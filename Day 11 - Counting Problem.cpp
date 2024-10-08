#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,odd_count=0;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++){ 
		    if(a[i]%2!=0) odd_count++;
		}
		if(odd_count%2==0 && odd_count!=0) cout<<"YES\n";
		else cout<<"NO\n";
	}	
}
