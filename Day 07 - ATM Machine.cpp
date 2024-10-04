#include <iostream>
using namespace std;

int main() {
	int t;  cin>>t;
	int n,k;   
	
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    int val=k;
	    
	    for(int i=0; i<n; i++)  cin>>a[i];
	    
	    
	    for(int i=0; i<n; i++){
	        if(a[i]<=val)   { cout<<"1"; val = val-a[i]; }
	        else cout<<"0";
	    }
	    cout<<endl;
	    
	}
	return 0;
}