#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,a,b) for(i=a;i<b;i++)
int main()
{
ll a,b,c,d,e,f,g,h,i,k,l=0,m;
a=2;b=2;
int flag=0;
while(1)
{
    cin>>a>>b;
    if((a==-1 && b==-1)||flag==1)break;
    else if(a==0 && b==0)cout<<"0\n";
    else
    {
        if(a==b)
        {
            cout<<"1\n";
        }
        else if(a==0 || b==0)
        {
            if(a>0)cout<<a<<"\n";
            else cout<<b<<"\n";
        }
        else
        {
            c=0;
            ll mi = min(a,b);
            mi++;
            ll ma = max(a,b);
            c = ma/mi;
            if(ma%mi==0){}
            else
            c++;

            cout<<c<<"\n";
        }
    }
}
}
