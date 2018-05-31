#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,c,d,e,f,g,h,i;
   cin>>a;
    for(b=0;b<a;b++)
    {
        cin>>c;
       d = (c)*(c+1);
       e = ((c-1)*(c))/2;
       d = ((d%1000007) + (e%1000007))%1000007;
       printf("%lld\n",d);
    }
    }
