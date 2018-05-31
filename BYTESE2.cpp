//time complexity -O(n*log)
//space complexity -


//logic - done using priority queue

//Submitted by Chunky_2808

#include<bits/stdc++.h>
using namespace std;
typedef  int ll;
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
fs(a);
for(b=0;b<a;b++)
{
    fs(c);
    //vector < pair<ll,ll> > gg;
    map<ll,ll> gg;
    set<ll> my;
    set<ll> :: iterator it;

    for(d=0;d<c;d++)
    {
        fs(e);fs(f);my.insert(e);
        gg[e]=f;
    }

    it = my.begin();g=0;h=0;

   priority_queue<ll,vector<ll>, greater<ll> > pq;

   pq.push(gg[*it]);it++;g = *it;h=1;

   while(1)
   {
    f = pq.top();

    if(pq.size()>h)
    h=pq.size();

   if(f<g)
   {
      while(f<g)
   {
       pq.pop();f=pq.top();if(pq.empty())break;
   }
   }
    pq.push(gg[*it]);

   it++;
   g = *it;

    if(pq.size()>h)
    h=pq.size();
   if(it==my.end())break;
   }
   cout<<h<<"\n";
 }
 }

 /*
 1
 5
 1 7
 2 4
 8 11
 9 10
 12 13
 */
