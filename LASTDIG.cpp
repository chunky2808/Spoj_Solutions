#include<bits/stdc++.h>
using namespace std;
typedef  int ll;
int main()
{
    ll a,b,c,d,e,f,g,h,i,arr[21][6];
    memset(arr,-1,sizeof(arr));
    cin>>a;
    for(b=0;b<a;b++)
    {
        cin>>c>>d;e=1;
        for(i=0;i<=4;i++)
        {
         if(i==0)arr[c][0]=1;
         else{e = e*c;g=e%10;arr[c][i]=g;}
        }
        double ro;h=0;i=0;ro=0.0;
        if(d>4){
        h = d-4;
        i = h/4;
        ro = h/4.0;
        if(i==ro)
        {
         printf("%d\n",arr[c][d-(4*i)]);
        }
        else
        {
            i++;
         printf("%d\n",arr[c][d-(4*i)]);
        }
    }
    else
    {printf("%d\n",arr[c][d]);}}
}
