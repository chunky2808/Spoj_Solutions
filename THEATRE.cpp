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
ll arr[a+1];
For(b,0,a)
{
    cin>>arr[b];
}
stack <ll> my;
e = 1;
//1000000007
For(b,0,a)
{
if(my.empty())
{
  my.push(arr[b]);
}
else if(my.top()<arr[b])
{
    while(!my.empty() && my.top()<arr[b]){
    my.pop();
    e = ((e%1000000007) * (arr[b]%1000000007))%1000000007 ;
   // cout<<e<<" "<<my.top()<<"\n";
    }
     my.push(arr[b]);
}
else
    my.push(arr[b]);
}
cout<<e<<"\n";
}

