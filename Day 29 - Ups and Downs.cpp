#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                if(a[i]>a[i+1])
                swap(a[i],a[i+1]);
            }
            else
            {
                if(a[i]<a[i+1])
                swap(a[i+1],a[i]);
            }
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }

    return 0;
}
