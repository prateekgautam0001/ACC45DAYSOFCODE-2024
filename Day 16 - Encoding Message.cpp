#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
  int t;
  cin>>t;
  while(t--)
 { int n,value=0;
   cin>>n;
   char temp;
   string a;
   cin>>a;
   for(int i=1;i<n;i+=2)
   { 
      temp=a[i-1];
       a[i-1]=a[i];
       a[i]=temp;
   }
   for(int i=0;i<n;i++)
   { 
     value=219-(int)a[i];
     a[i]=(char)value;
   }
   cout<<a<<endl;
 }
   
	return 0;
}
