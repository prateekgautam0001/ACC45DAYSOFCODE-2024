#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        
        int l[n];
        for(int i = 0; i < n; i++){
            cin >> l[i];
        }
        
        int r[n];
        for(int i = 0; i < n; i++){
            cin >> r[i];
        }
        
        int mi = 0;
        int largestProduct = l[0] * r[0];
        
        for(int i = 0; i < n; i++){
	        if(l[i] * r[i] >= largestProduct && r[mi] < r[i]){
	            mi = i;
	        }
	    }
	    cout << mi + 1 << endl;
    }
    return 0;
}
