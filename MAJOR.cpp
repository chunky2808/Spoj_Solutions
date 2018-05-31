#include<bits/stdc++.h>
using namespace std;
typedef  int ll;

    ll ar[1000000];
int main()
{
    ll a,b,c,d,e,f,g,h,i,j;
   scanf("%d",&a);
      for(b=0;b<a;b++)
      {
          scanf("%d",&c);
    ll arr[c+1];
    memset(ar,0,sizeof(ar));
   map<ll,ll> my;
    for(d=0;d<c;d++)
        {scanf("%d",&arr[d]);
my[arr[d]]++;}
i=0;j=0;
   for(d=0;d<c;d++)
   {
       if(my[arr[d]]>(c/2))
       {
           i = arr[d];j++;break;
       }
   }
   if(j>0)
   {
       printf("YES %d\n",i);
   }
   else
   printf("NO\n");
    }}
