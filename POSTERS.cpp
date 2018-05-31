#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int uu=0;

 void query(ll seg[],ll low,ll high,ll pos,ll lazy[] ,ll po[])
 {
     ll mid;
    if(lazy[pos]!=0)
    {
        po[uu] = lazy[pos];uu++;
        return ;
    }
    else if(low==high)
    {
        return;
    }
    else{
        mid = (low+high)/2;
        query(seg,low,mid,(2*pos)+1,lazy,po);
        query(seg,mid+1,high,(2*pos)+2,lazy,po);
    }

 }
void build(ll seg[],ll low,ll high,ll pos,ll arr[])
{
    ll mid;
    if(low==high)
    {
         seg[pos] = arr[low];
    }
    else
    {
        mid = (low+high)/2;
        build(seg,low,mid,(2*pos)+1,arr);
        build(seg,mid+1,high,(2*pos)+2,arr);
        seg[pos] = (seg[(2*pos)+1]+seg[(2*pos)+2]);
    }
}

void update(ll seg[],ll low,ll high,ll qlow,ll qhigh,ll value,ll pos,ll arr[],ll lazy[])
 {
    if(lazy[pos]!=0)
    {
        if(low!=high)
        {
            lazy[(2*pos)+1]=lazy[pos];
            lazy[(2*pos)+2]=lazy[pos];
        lazy[pos]=0;
        }
        else
        {
        }
    }
    else{}

    if((qlow>high) || (qhigh<low))
        {return ;}
else{}

    ll mid;
    if((low>=qlow) && (high<=qhigh))
    {
        lazy[pos]=value;
        if(low!=high){
            lazy[(2*pos)+1] = 0;
            lazy[(2*pos)+2] = 0;}else{}
        return ;
    }
    if(low==high){lazy[pos]=value;return;}
    else{}
        mid = (low+high)/2;
            update(seg,low,mid,qlow,qhigh,value,(2*pos)+1,arr,lazy);
     update(seg,mid+1,high,qlow,qhigh,value,(2*pos)+2,arr,lazy);
      }

ll seg[1000005];
ll lazy[1000005];
ll arr[1000005];
int main()
{

    ll a,b,c,d,e,f,g,h,i,j,k,l;
    memset(lazy,0,sizeof(lazy));
    cin>>a;
    for(b=0;b<a;b++)
    {
        memset(seg,0,sizeof(seg));
        memset(lazy,0,sizeof(lazy));
        memset(arr,0,sizeof(arr));
cin>>c;
vector < pair <int,int> > par;
vector < pair <int,int> > :: iterator it2;
map <int,int> jan;
vector<int> paras;
for(d=0;d<c;d++)
{
    cin>>e>>f;
    paras.push_back(e);
    paras.push_back(f);
    par.push_back(make_pair(e,f));
 }

 set<int> myset(paras.begin(),paras.end());
  set<int>:: iterator it;
 g=1;
 for(it=myset.begin();it!=myset.end();it++)
 {
    jan[*it] = g;
    g++;
 }
 e = *it;

for(d=0;d<c;d++)
{
par[d].first = jan[par[d].first];
par[d].second = jan[par[d].second];
}
g=1;
for(d=0;d<c;d++)
{
update(seg,0,e-1,par[d].first-1,par[d].second-1,g,0,arr,lazy);
g++;
}
ll po[200000];
memset(po,0,sizeof(po));
 query(seg,0,e-1,0,lazy,po);
set<int> yt(po,po+200000);
int oo = yt.size()-1;
printf("%d\n",oo);
}}

