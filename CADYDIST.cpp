#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 void fastscan(ll &x)
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
    ll a,b,c,d,e,f,g,h,i;
   while(1){
    fastscan(a);
    if(a==0)
        break;

    ll arr[a+1],arr2[a+1];
    for(b=0;b<a;b++)
       fastscan(arr[b]);
    for(b=0;b<a;b++)
       fastscan(arr2[b]);
    sort(arr2,arr2+a);
    sort(arr,arr+a,greater<int>());
    e = 0;
    for(b=0;b<a;b++)
    {
        e = e + (arr[b]*arr2[b]);
    }
    printf("%lld\n",e);
}}
