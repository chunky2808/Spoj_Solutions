#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ll a,b,c,d,e,f,g,h,i,j,k,l,p=0,q=0,z,x,s,w;
    scanf("%lld",&a);
    for(b=0;b<a;b++)
    {
        scanf("%lld",&c);
        d=0;e=0;
        f=0;g=0;i=0;j=0;
        k = c/4;
        l = c%4;
        if(k>0)
        {
            if(k>1)
            {
               z = 1 + ((k-1)*4);
            z = ((1+z)*k)/2;
        x = 2 + ((k-1)*4);
        x = ((2+x)*k)/2;
       s = 3 + ((k-1)*4);
       s = ((3+s)*k)/2;
       w = 4 + ((k-1)*4);
       w = ((4+w)*k)/2;
       d = z-s;
       e = x-w;
            }
            else{
        z = 1 + ((k-1)*4);
        x = 2 + ((k-1)*4);
       s = 3 + ((k-1)*4);
       w = 4 + ((k-1)*4);
        d = z-s;
       e = x-w;}}
       //cout<<d<<" "<<e<<"\n";
       if(l==1)
       {
           d += 1 +((k)*4);

       }
       else if(l==2)
       {

           d += 1 +((k)*4);
           e += 2 +((k)*4);
       }
       else if(l==3)
       {
           d += 1 +((k)*4);
           e += 2 +((k)*4);
           d -= 3 +((k)*4);
       }
       else{}

       printf("%lld %lld\n",d,e);}}
