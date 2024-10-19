#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,limak=0,bob=0;
	    cin>>a>>b;
	    for(int i=1;;i++){
	        if(i%2==0){
	            bob+=i;
	            if(bob>b){
	                cout<<"Limak"<<endl; 
	                break;
	            } 
	        }
	        else{
	            limak+=i;
	            if(limak>a) {
	            cout<<"Bob"<<endl;
	            break;
	            }
	        }
	    }
	}
	return 0;
}
