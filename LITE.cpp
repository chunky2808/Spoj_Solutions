#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void build(ll seg[],ll low,ll high,ll pos,ll arr[])
{
    ll mid;
    if(low==high)
    {
         seg[pos] = 0;
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

void update(ll seg[],ll low,ll high,ll qlow,ll qhigh,ll pos,ll arr[],ll lazy[])
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
//cout<<pos<<" "<<lazy[pos]<<" "<<low<<" "<<high<<"\n";

    if((qlow>high) || (qhigh<low))
        {return ;}
else{}

    ll mid;
    ll value;
    if((low>=qlow) && (high<=qhigh))
    {
        if(seg[pos]<=0)
        {seg[pos] = seg[pos] + ((high-low+1)*1);value = 1;}
        else if(seg[pos]>=1)
        {seg[pos] = seg[pos] - ((high-low+1)*1);value =-1;}

        if(low!=high)
        {
            lazy[(2*pos)+1] += value;
            lazy[(2*pos)+2] += value;
        }
        return ;
    }
    else{}
        mid = (low+high)/2;
            update(seg,low,mid,qlow,qhigh,(2*pos)+1,arr,lazy);
     update(seg,mid+1,high,qlow,qhigh,(2*pos)+2,arr,lazy);
        seg[pos] = (seg[(2*pos) +1] + seg[(2*pos) +2]);
      }

ll seg[1000005];
ll lazy[1000005];
ll arr[1000005];
int main()
{

    ll a,b,c,d,e,f,g,h,i,j,k,l;
    memset(lazy,0,sizeof(lazy));
    memset(seg,0,sizeof(seg));
    cin>>a>>b;
    for(c=0;c<a;c++)
        arr[c]=0;
        build(seg,0,a-1,0,arr);
    for(c=0;c<b;c++)
    {
        cin>>d>>e>>f;
        if(d==0)
        {
            update(seg,0,a-1,e-1,f-1,0,arr,lazy);
        }
        else
        {
            ll p = query(seg,e-1,f-1,0,a-1,0,arr,lazy);//qlow,qhigh,low,high,po0,0,lazy);
                cout<<p<<"\n";
        }
    }
}
