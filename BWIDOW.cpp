//time complexity -
//space complexity -

//Submitted by Chunky_2808

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void fastscan(ll &x)
    {
        bool neg=false;
        register int c;
        x =0;
         while((c=getchar()) < 48);
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }
#define For(i,a,b) for(i=a;i<b;i++)
#define Me(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mp make_pair
#define F first
#define S second

#define fs(a) fastscan(a)
#define ss set<ll>
#define vv vector<ll>
int main()
{
ll a,b,c,d,e,f,g,h,i,j;
cin>>a;
for(b=0;b<a;b++)
{
    cin>>c;
    vector <pair<int,int>> pp;
    vector <pair<int,int>> :: iterator it;i=0;
    j=0;ll jj=0;
    for(d=0;d<c;d++)
    {
        cin>>e>>f;
        pp.pb(mp(e,f));
        if(e>jj){jj=e;j=d;}
    }
      sort(pp.rbegin(),pp.rend());
        g=0;
        for(it=pp.begin();it!=pp.end();it++)
        {
            if(g==0)
            {
                h = (*it).first;
            }
            else
            {
             if((*it).second>=h)
             {
                 i=1;break;
             }
            }
            g++;
        }
        if(i==0)cout<<j+1<<"\n";
            else
               cout<<-1<<"\n";
    }
}
