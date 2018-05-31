    #include<bits/stdc++.h>
    using namespace std;
typedef long long int ll;
     void fastscan(ll &x)
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
        ll gcd (ll a,ll b)
        {
            if(a==0)
                return b;
            else
                gcd(b%a,a);
        }
    int main()
    {
        ll a,b;
        fastscan(a);
        for(b=0;b<a;b++)
        {
            ll g=0,m=0,n=0;
    double c,d,e,f,zz=1;
            cin>>c>>d>>e;
            if(e>c){
           e = e/c;
            f = (log(e))/(log(d));
            g=f;}
            else
                g=0;

            printf("%lld\n",g);}}
