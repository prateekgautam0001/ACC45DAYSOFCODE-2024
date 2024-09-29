#include<iostream>
using namespace std;

int main()
{
    int TESTCASE=1;
    cin>>TESTCASE;
    while (TESTCASE--)
    {
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        if(a+b+c>d+e+f)
        {
            cout<<"DRAGON"<<endl;
        }
        else if(a+b+c<d+e+f)
        {
            cout<<"SLOTH"<<endl;
        }
        else
        {
            if(a>d) cout<<"DRAGON"<<endl;
            else if(d>a) cout<<"SLOTH"<<endl;
            else
            {
                if(b>e) cout<<"DRAGON"<<endl;
                else if(e>b) cout<<"SLOTH"<<endl;
                else
                {
                    cout<<"TIE"<<endl;
                }
            }
        }
    }
    
}