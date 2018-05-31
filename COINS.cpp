//using map
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll> arr;
ll input(ll a)
{
    ll b,c,d,e,f,g,h,i,j,k,sum=0;
    b = a/2;
    c = a/3;
    d = a/4;
    sum = b+c+d;
    if(arr[b]!=0 && arr[c]!=0 && arr[d]!=0)
    {
        return(arr[b]+arr[c]+arr[d]);
    }
    else{
    if(sum>a)
    {
        e = input(b);
        f = input(c);
        g = input(d);
            arr[b] = e;
            arr[c] = f;
            arr[d] = g;
        return (e+f+g);
    }
    else
    {
        arr[a] = a;
        return a;
    }}
}
int main()
{
    ll a,b,c,d,e,f,g,h,i,j;
    while(scanf("%lld",&a)!=EOF){
    b = input(a);
    printf("%lld\n",b);
}}
