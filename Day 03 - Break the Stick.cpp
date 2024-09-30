#include <iostream>
using namespace std;

int main() {
	int t, n, x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    if(x%2==0)
	    {
	        if(n%2==0)
	            cout<<"YES"<<endl;
	        else
	            cout<<"NO"<<endl;
	    }
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}