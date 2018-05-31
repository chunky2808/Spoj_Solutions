//time complexity -
//space complexity -

//Submitted by Chunky_2808

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
ll a,b,c,d,e,f,g,h;
cin>>a;
For(b,0,a)
{
    cin>>c;
    map<string,int> my;
    string ch;
    cin.ignore();
    For(d,0,c)
    {
        getline(cin,ch);
        my[ch]++;
    }
    map<string,int> ::iterator it;
    for(it=my.begin();it!=my.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<"\n";
cout<<"\n";
}
}
