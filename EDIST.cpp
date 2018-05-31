//time complexity -
//space complexity -

//Submitted by Chunky_2808

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
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
#define For(i,a,b) for(i=a;i<b;i++)
#define Me(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mp make_pair
#define F first
#define S second

#define fs(a) fastscan(a)
#define ss set<ll>
#define vv vector<ll>
ll blo[3000][3000];

int main()
{
ll a,b,c,d,e,f,g,h,i,j;
cin>>a;
for(b=0;b<a;b++)
{
    string ch1,ch2;
    cin>>ch1;
    cin>>ch2;
    c = ch1.size();
    d = ch2.size();

    for(e=0;e<=c;e++)
    {
        if(e==0)
        blo[0][e] = 0;
        else
            blo[0][e] = e;
    }

    for(e=0;e<d;e++)
    {
        if(e==0)
        blo[e][0] = 0;
        else
            blo[e][0] = e;
    }
    for(e=1;e<=c;e++)
    {
        for(f=1;f<=d;f++)
        {
            if(ch1[e-1]==ch2[f-1])
            {
             blo[e][f] = blo[e-1][f-1];//if character are same then just put diagonal value
            }
            else
            {
             blo[e][f] = min(min(blo[e-1][f],blo[e][f-1]),blo[e-1][f-1])+1;//if char are different then pick min +1
            }
        }
    }
    cout<<blo[c][d]<<"\n";
}
}
