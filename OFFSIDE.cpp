#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b;a=1;b=1;
   while(a!=0 && b!=0)
   {
   cin>>a>>b;
   if(a==0 && b==0)
    break;
   else{}
    ll c,d,e,f,g,h,i;
   ll arr[a+1];
   ll arr2[b+1];
   for(c=0;c<a;c++)
    cin>>arr[c];
   for(c=0;c<b;c++)
    cin>>arr2[c];
   sort(arr2,arr2+b);
   d = arr2[1];e = arr2[0];
   ll flag=0;
   for(c=0;c<a;c++)
   {
       if(arr[c]<d)
       {
          flag=1;       }
   }
   if(flag==1)
    cout<<"Y\n";
   else
    cout<<"N\n";
}
}
