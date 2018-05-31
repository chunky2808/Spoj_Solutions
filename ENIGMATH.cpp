    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
    ll gcd(ll a,ll b)
    {
        if(a==0)
            return b;
        else
            gcd(b%a,a);
    }
typedef long long int ll;
    int main()
    {
        ll a,b;
        cin>>a;
        for(b=0;b<a;b++)
        {ll c,d,e,f,g,h,i;
            cin>>c>>d;
            if(d>c)
            {
                e = gcd(c,d);
                c =c/e;
                d=d/e;
                cout<<d<<" "<<c<<"\n";
            }
            else
            {
                e = gcd(d,c);
                c = c/e;
                d = d/e;
                cout<<d<<" "<<c<<"\n";
            }

        }}
