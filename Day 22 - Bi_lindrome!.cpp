#include <bits/stdc++.h>
using namespace std;

int main() {
	int T{}, N{};
	string str{};
	cin >> T;
	while(T--){
	    cin >> N;
	    cin >> str;
	    int j{0};
	    for (j=0;j<N;++j){
	        int count{0};
	        for (int i{0}; i<N; ++i){
	            if(str[i] == str[j])
	                ++count;
	            if(count == 2){
	                cout << N-2;
	                break;
	            }
	        }
	        if(count == 2){
	            --j;
	            break;
	        }
	    }
	    if(j==N)
	        cout << -1;
	    cout << "\n";
	}
	return 0;
}
