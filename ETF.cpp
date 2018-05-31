#include<bits/stdc++.h>
using namespace std;
typedef  int ll;
void fastscan(ll &x)
    {
        bool neg=false;
        register int c;
        x =0;
         while((c=getchar()) < 48);
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
        if(c==1)
            {
    printf("1\n");
            }
        else
    {
        h=1;i =c;
        for(d=2;d<=sqrt(c);d++)
        {
            e=d;f=0;g=0;
            while(i%e==0)
            {g++;
                i = i/e;
            }
            if(g>0)
            h = h*((pow(d,g)-pow(d,g-1)));
            if(i<=1)break;
        }
        if(i>1)
        {
            h = h*(i-1);
        }
printf("%d\n",h);


    }

    }

}

