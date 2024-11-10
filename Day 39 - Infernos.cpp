#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,i,sec;
	cin>>t;
	
	while(t--){
	    cin>>n>>x;
	    int arr[n];
	    for(i=0;i<n;i++)    cin>>arr[i];
	    sort(arr, arr+n);
	    i = upper_bound(arr,arr+n,x)-arr;
	    
	    if(i!=n){
	        sec = i;
	        for(;i<n;i++){
	            if(arr[i]%x != 0) sec+=((arr[i]/x)+1);
	            else    sec+=(arr[i]/x);
	        }
	    }
	    else
	        sec = n;
	    
	    if(sec > arr[n-1])    cout<<arr[n-1]<<endl;
	    else    cout<<sec<<endl;
	}
	return 0;
}
