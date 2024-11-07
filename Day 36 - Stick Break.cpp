#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	long int k,l;
	cin>>t;
	while(t--){
	    cin>>l>>k;
	   
	     if(l%k==0)cout<<0<<endl;
	    else cout<<1<<endl;
	}
	return 0;
}
