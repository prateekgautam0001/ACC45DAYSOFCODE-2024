#include <iostream>
using namespace std;

int virus(int n,int a){
    float b = n/2;
    if(b>=a){
        return a;
    }
    else if(a>b){
        return n-a; 
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    cin>>n>>a;
	    std::cout << virus(n,a) << std::endl;
	}
	return 0;
}