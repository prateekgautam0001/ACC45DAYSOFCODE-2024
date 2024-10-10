#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;// n-max repeat = ans
	    // we have to find out max repeat//
	    int a[n],sum=0;
	    for(int j=1;j<=n;j++)
	    {
	        cin>>a[j];
	    }
	    for(int i=1;i<=10;i++)
	    {
	        int count=0;
	        for(int j=1;j<=n;j++)
	        {
	            if(a[j]==i)
	            {
	                count++;
	            }
	        }
	        if(sum<count)
	        {
	            sum=count;
	        }
	    }
	    cout<<n-sum<<endl;
	}
	return 0;
}
