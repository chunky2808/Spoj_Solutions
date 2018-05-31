#include<bits/stdc++.h>
using namespace  std;
typedef long long int ll;
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
    ll d,e,f,g,h,i,j,k,l;
    int a,b,c;
    fastscan(a); fastscan(b);c=0;d=0;e=0;
    int arr[a+1];
    for(e=0;e<a;e++)
    {
         fastscan(arr[e]);
    }
    c=d=0;ll p=0,u=0;
    for(e=0;e<a;e++)
    {
    c = c+ arr[e];
    //cout<<c<<"\n";
    if(c>=b)
    {
if(c==b)
{
  u = b;break;
}
else{
        ll uu = c-arr[e];
        if(uu>u)
            u = uu;
        }
    while(c>b)
    {
        c = c - arr[p];
        p++;
    }
}
if(c==b)
{
  u = b;break;
}
}
if(c>u && c<=b)
    u=c;

printf("%lld\n",u);
}
