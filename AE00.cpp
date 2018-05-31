#include<bits/stdc++.h>
using namespace std;

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
    int a,b,c,d;
   fastscan(a);//10000
    if(a==1)
        c=1;
    else
        c=2;
    for(b=3;b<=a;b++)
    {
        for(d=1;d<=sqrt(b);d++)
        {
            if(b%d==0)
                c++;
        }

    }
    printf("%d\n",c);
}

