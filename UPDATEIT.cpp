#include<bits/stdc++.h>
using namespace std;
typedef  int ll;

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

ll query(ll seg[],ll qlow,ll qhigh,ll low,ll high,ll pos,ll arr[],ll lazy[])
 {
    if((qlow>high) || (qhigh<low))
    {
        return 0;
    }
else{}
    ll mid;
    if(lazy[pos]!=0)
            {
                seg[pos] = seg[pos]+ ((high-low+1)*lazy[pos]);
               if(low!=high){
                lazy[(2*pos)+1] = lazy[(2*pos)+1] + lazy[pos] ;
                lazy[(2*pos)+2] = lazy[(2*pos)+2] + lazy[pos] ;
                }

    lazy[pos]=0;}
    else{}
    if((low>=qlow) && (high<=qhigh))
    {
    return seg[pos];
    }
    else{}
    mid = (low+high)/2;
    return(query(seg,qlow,qhigh,low,mid,(2*pos)+1,arr,lazy) + query(seg,qlow,qhigh,mid+1,high,(2*pos)+2,arr,lazy));
  }

void update(ll seg[],ll low,ll high,ll qlow,ll qhigh,ll value,ll pos,ll arr[],ll lazy[])
 {
    if(lazy[pos]!=0)
    {
        seg[pos] = seg[pos] + ((high-low+1)*(lazy[pos]));
        if(low!=high)
        {
            lazy[(2*pos)+1]+=lazy[pos];
            lazy[(2*pos)+2]+=lazy[pos];
        }
        lazy[pos]=0;
    }else{}

    if((qlow>high) || (qhigh<low))
        {return ;}
else{}

    ll mid;
    if((low>=qlow) && (high<=qhigh))
    {
        seg[pos] = seg [pos] + ((high-low+1)*value);
        if(low!=high)
        {
            lazy[(2*pos)+1] += value;
            lazy[(2*pos)+2] += value;
        }
        return ;
    }
    else{}
        mid = (low+high)/2;
            update(seg,low,mid,qlow,qhigh,value,(2*pos)+1,arr,lazy);
     update(seg,mid+1,high,qlow,qhigh,value,(2*pos)+2,arr,lazy);
        seg[pos] = (seg[(2*pos) +1] + seg[(2*pos) +2]);
      }

ll seg[1000005];
ll lazy[1000005];
ll arr[1000005];

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
int main()
{

    ll a,b,c,d,e,f,g,h,i,j,k,l;
    memset(lazy,0,sizeof(lazy));
    fastscan(a);
    for(b=0;b<a;b++)
    {

        fastscan(c);fastscan(d);
        memset(arr,0,sizeof(arr));
        memset(seg,0,sizeof(seg));
        memset(lazy,0,sizeof(lazy));
        build(seg,0,c-1,0,arr);
        for(e=0;e<d;e++)
        {
       fastscan(f);fastscan(g);fastscan(h);
        update(seg,0,c-1,f,g,h,0,arr,lazy);
        }
        fastscan(d);
        for(e=0;e<d;e++)
        {
            fastscan(f);
        g =  query(seg,f,f,0,c-1,0,arr,lazy);
cout<<g<<"\n";

}        }}
