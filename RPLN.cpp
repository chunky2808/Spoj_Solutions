#include<bits/stdc++.h>
using namespace std;
#define maxi 100000009;
typedef  int ll;
void fastscan(int &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
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
        seg[pos] = min(seg[(2*pos)+1],seg[(2*pos)+2]);
    }
}

ll query(ll seg[],ll qlow,ll qhigh,ll low,ll high,ll pos,ll arr[])
{
    ll mid;
    if(qlow<=low && qhigh>=high)
    {
        return seg[pos];//total overlap
    }
    else if(qlow>high || qhigh<low )
    {
        //no overlap
        return 1000000500;
    }
    else
    {
        mid = (low+high)/2;
        return min(query(seg,qlow,qhigh,low,mid,(2*pos)+1,arr),query(seg,qlow,qhigh,mid+1,high,(2*pos)+2,arr));
    }
}


ll seg[2000005];

ll arr[2000005];
int main()
{

    ll a,b,c,d,e,f,g,h,i,j,k,l;
    fastscan(a);
    for(b=1;b<=a;b++)
    {
    fastscan(d);fastscan(e);
    for(c=0;c<d;c++)
        fastscan(arr[c]);
        build(seg,0,d-1,0,arr);
        printf("Scenario #%d:\n",b);
 for(c=0;c<e;c++)
 {
     fastscan(f);fastscan(g);
     ll po = query(seg,f-1,g-1,0,d-1,0,arr);
     printf("%d\n",po);
 }
    }}
