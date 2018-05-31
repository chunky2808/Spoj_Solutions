#include<bits/stdc++.h>
using namespace std;
typedef  int ll;
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
   fastscan(a);
   for(b=0;b<a;b++)
   {
       fastscan(c);fastscan(d);fastscan(e);
       int arr[c+1];
       for(f=0;f<c;f++)
       {
           fastscan(arr[f]);
       }
       sort(arr,arr+f,greater<int>());

       for(f=0;f<c;f++)
       {
           if(arr[f]>e)
           {
               arr[f] = arr[f] - e;
               d--;f--;
           }
           if(d==0)
            break;
       }
       if(d>0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
   }}
