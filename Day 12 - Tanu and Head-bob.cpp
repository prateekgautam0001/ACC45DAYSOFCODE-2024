#include <iostream>
#include <string.h>

using namespace std;

void solution(string str){
    if(str.find("I")!= string::npos) {
        cout<<"INDIAN"<<endl;
        return;
    }
    
    if(str.find("Y")!= string::npos){
        cout<<"NOT INDIAN"<<endl;
        return;
    }
    
    cout<<"NOT SURE"<<endl;
    return;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    
	    int len;
	    string input;
	    cin>>len;
	    cin>>input;
	    solution(input);
	}
}