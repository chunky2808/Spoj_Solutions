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
        ll a,b,c,d,e,f,g;
        long long int sum=0,u,y;
        while(1)
        {
            fastscan(a);fastscan(b);
            if(a==-1 && b==-1)
                break;
            else
            {
                e=0;
                ll fl=0,pp=0;;
                for(d=1;d<2;d++)
                {
                    if(a+1<b)
                        fl=1;
                    else
                    {
                        e = b-2;pp=1;
                    }
                }
                sum=0;
                if(fl==1){
                for(d=1;d<a;d++)
                {
                if(d+a<b)
                {
                    sum = sum + a-d;
                }
                else{pp=1;e = b-d-d;break;}
                }}
//cout<<sum<<" "<<e<<"\n";
                u=y=0;
                if(pp==1)
                {
                    if(b%2==0)
                    {
                        u=0; u = ((e-2)/2) +1;
                        y=0; y = (u*(2+e))/2;
                        if(e<2)
                            y=0;
                    }
                    else
                    {
                        u=0; u = ((e-1)/2)+1;
                        y=0; y = (u*(1+e))/2;
                        if(e<1)y=0;
                    }
                }
y = y+sum;
long long int uu=0,yy=0;
uu = ((a)*(a-1))/2;
//cout<<y<<"\n";
yy = gcd(y,uu);
y = y/yy;
uu = uu/yy;
         if(y==0 || (y==1 && uu==1))
                   printf("%lld\n",y);
         else
                    printf("%lld/%lld\n",y,uu);
                }}}


