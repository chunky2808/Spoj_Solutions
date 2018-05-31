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
int a,b,c,d,e,f,g,h;
fastscan(a);
unordered_map<int,int>my;
for(b=0;b<a;b++)
{
    fastscan(g);
my[g]++;

}
unordered_map <int,int> :: iterator it;
for(it=my.begin();it!=my.end();it++)
{
    if(it->second == 1)
    {
        printf("%d\n",it->first);
        break;
    }
}}
