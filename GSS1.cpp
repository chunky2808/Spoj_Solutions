#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
ll seg[2000000][4];//sum,prefix,suffix,ma
void build(ll seg[][4],int low,int high,int pos,ll arr[])
{
    ll mid;
    if(low==high)
    {
    seg[pos][0] = arr[low];//0 for sum
    seg[pos][1] = arr[low];//1 for prefix
    seg[pos][2] = arr[low];//2 for suffix
    seg[pos][3] = arr[low];//3 for best
    return;
    }
    else
    {
        mid = (low+high)/2;
        build(seg,low,mid,(2*pos)+1,arr);
        build(seg,mid+1,high,(2*pos)+2,arr);
        ll left = (2*pos)+1;
        ll right  = (2*pos)+2;
        seg[pos][0] = seg[left][0] + seg[right][0];
        seg[pos][1] =  max(seg[left][0]+ seg[right][1],seg[left][1]);
        seg[pos][2] = max(seg[right][0]+seg[left][2],seg[right][2]);
        seg[pos][3] =  max(max (max ( max ( max(seg[left][3],seg[right][3]),seg[left][2]+seg[right][1]),seg[pos][0]),seg[pos][1]),seg[pos][2]);

    return;}
}
ll query(ll seg[][4],int low,int high,int qlow,int qhigh,int pos,ll arr[])
{

    if(qlow>high || qhigh<low)
    {

        return  200003;
    }
    else if(low>=qlow && high<=qhigh)
    {
        //cout<<seg[pos][3]<<" hi\n";
        return pos;
    }
    else
    {
    ll mid;
    mid =(low+high)/2;
     ll l1 =query(seg,low,mid,qlow,qhigh,(2*pos)+1,arr);
     ll l2=query(seg,mid+1,high,qlow,qhigh,(2*pos)+2,arr);
    ll left = l1;
    ll right = l2;
    ll hu = pos+500000;
    seg[hu][0] = seg[left][0] + seg[right][0];
        seg[hu][1] =  max(seg[left][0]+ seg[right][1],seg[left][1]);
        seg[hu][2] = max(seg[right][0]+seg[left][2],seg[right][2]);
        seg[hu][3] =  max(max (max ( max ( max(seg[left][3],seg[right][3]),seg[left][2]+seg[right][1]),seg[hu][0]),seg[hu][1]),seg[hu][2]);
        //cout<<hu<<" "<<seg[hu][3]<<"\n";
        return hu;
}
}
int main()
{

    int a,b,c,d,e,f,g,h,i,j,k;
 for(b=0;b<2000000;b++)
 {
     seg[b][0] = seg[b][1] = seg[b][2] = seg[b][3] = -150009 ;
 }
    scanf("%d",&a);
    ll arr[a+1];
    for(b=0;b<a;b++)
        scanf("%lld",&arr[b]);
    build(seg,0,a-1,0,arr);
    scanf("%d",&c);
    for(d=0;d<c;d++)
    {
        scanf("%d %d",&e,&f);
      ll po = query(seg,0,a-1,e-1,f-1,0,arr);
      printf("%lld\n",seg[po][3]);

    }

}
