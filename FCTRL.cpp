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
    int a,b,c,d,sum=0;
   fastscan(a);
    for(b=0;b<a;b++)
    {
   fastscan(c);sum=0;
        for(d=5;d<=c;d=d*5)
        {
            sum = sum + c/d;
        }
        cout<<sum<<"\n";
    }
}
