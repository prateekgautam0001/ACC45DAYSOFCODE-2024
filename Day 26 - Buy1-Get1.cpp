#include<bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >>t;
    while(t--){
        string str;
        int arr[52]{0}, cost = 0;
        cin>>str;
        for(int i = 0; i < str.size(); ++i){
            isupper(str[i]) ? arr[(int)str[i] - 'A' + 26]++ : arr[(int)str[i] - 'a']++;
        }
        for(int value : arr){
            cost += value/2 + value%2;
        }
        cout << cost << endl;
	
    }
    return 0;
}
