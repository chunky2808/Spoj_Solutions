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
    fastscan(a);
      for(b=0;b<a;b++)
      {
          fastscan(c);
          e=c;f=0;g=0;h=0;i=0;
          bool flag=0;
          for(d=0;d<=sqrt(c)+1;d++)
          {
              f = 0;
              f = d*d;g=c;
              g = g-f;
              h = sqrt(g);
              if((h*h)==g)
                {
                    flag=1;break;
                }
          }
          if(flag==1)printf("Yes\n");
          else printf("No\n");
         }
}
