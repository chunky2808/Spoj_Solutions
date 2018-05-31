#include<stdio.h>
int k=0;
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

int gcd(int a,int b);
int main()
{
    int x,b;
    int c,y,e,n,a;
    fastscan(x);
    for(b=0;b<x;b++)
    {
        fastscan(c);fastscan(y);
        e = gcd(c,y);
        a=0;
        for(n=1;n<=e;n++)
        {
            if(e%n==0)
            a++;
        }
        printf("%d\n",a);
        }
}

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}
