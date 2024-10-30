#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        int d[n];
        for(int i = 0 ; i < n ; i++){
            cin>>d[i];
        }
        string count = "";
        for(int i = 0 ; i < n ; i++){
            if(d[i]% k == 0){
                count = count + "1";
            }
            else{
                count = count + "0";
            }
        }
        cout<<count<<"\n";
    }
}
