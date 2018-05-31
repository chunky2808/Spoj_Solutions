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
bool prime[1000002];
ll gcd(ll a,ll b)
{
    if(b==0)
    {
       return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int main()
{
ll a,b,c,d,e,f,g,h,i,j;
Me(prime,false);
prime[1]=true;
for(a=2;a<=sqrt(1000000);a++)
{
    if(prime[a]==false)
    for(b=2*a;b<=1000000;b=b*a)
    {
     prime[b] =true;
    }
}
i=1;j=1;
while(i!=0 && j!=0)
{
    cin>>i>>j;
    if(i==0 && j==0)break;

    h=0;h=1;h = i*j;g=0;
    if(i>j)g= gcd(i,j);
        else g = gcd(j,i);
       h = h/g;
       if(h==i)
       {
           h =h /j;
       }
       else if(h==j)
       {
        h = h/i;
       }
       cout<<h<<"\n";

}
}
/*
2 4
4 4
3 4
10 20
*/
