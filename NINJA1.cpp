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
    ll a,b,c,d,e,f,g,h,i,j,k,l;
    fastscan(a);
    for(b=0;b<a;b++)
    {
        fastscan(c);
        ll arr[c+1];
        ll arr2[c+1];
        for(d=0;d<c;d++)
            fastscan(arr[d]);
        for(d=0;d<c;d++)
            fastscan(arr2[d]);
            int flag=0;
        for(d=0;d<c;d++)
        {
            if(d==0)
            {
                e = min(arr[d],arr2[d]);
            }
            else
            {
                g = min(arr[d],arr2[d]);
                h = max(arr[d],arr2[d]);
                if(e<=g)
                    e =g;
                else if(h>=e)
                    e=h;
                else
                {
                    flag=1;break;
                }
            }
        }
        if(flag==1)
            printf("NO\n");
        else
            printf("YES\n");

    }
}
