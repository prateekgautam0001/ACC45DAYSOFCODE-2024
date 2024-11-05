#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t,s;
	cin>>t;
	while(t--){
	    cin>>s;
	    int arr[s][s];
	    for(int i = 0; i < s; i++){
	        for(int j = 0; j <s; j++){
	            cin>>arr[i][j];
	        }
	    }
	    int ans = 0;
	    for(int i = 0; i < s; i++){
	        for(int j = 0; j <s; j++){
	            
	            int l=i,m=j,sum=0;
	            while(l<s && m<s)
	            {
	                sum += arr[l][m];
	                l++;
	                m++;
     	            ans = max(sum,ans);
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
