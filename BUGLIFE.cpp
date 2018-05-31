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
        int main()
        {
        ll a,b,c,d,e,f,g,h;
        fastscan(a);
        for(b=0;b<a;b++)
        {
            fastscan(c);fastscan(d);
            set<ll> myset;
            set<ll> :: iterator it;
            for(e=1;e<=c;e++)myset.insert(e);
            bool check[c+1];
            ll par[c+1];
            ll col[c+1];
            memset(check,false,sizeof(check));
            memset(par,0,sizeof(par));
            memset(col,0,sizeof(col));
            vector<int> arr[c+1];
            for(e=0;e<d;e++)
            {
                fastscan(f);fastscan(g);
                arr[f].push_back(g);
                arr[g].push_back(f);
            }
            stack<int> mystack;
            mystack.push(1);
            col[1] = 2;
                         bool flag=0;
            while(!mystack.empty())
            {
               h = mystack.top();
               myset.erase(h);
               mystack.pop();check[1] =true;
                for(ll i=0;i<arr[h].size();i++)
                {
                    if(check[arr[h][i]]==false)
                    {
                        mystack.push(arr[h][i]);
                        par[arr[h][i]] = h;
                        check[arr[h][i]] =true;
                        if(col[h]==2)
                        col[arr[h][i]] =3;
                        else
                            col[arr[h][i]]=2;
                    }
                    else if(par[h]==arr[h][i])
                    {

                    }
                    else
                    {
                        if((col[h]==2 && col[arr[h][i]]==2)||(col[h]==3 && col[arr[h][i]]==3))
                            flag=1;
                    }
                }
                if(mystack.empty())
                {
                 if(myset.empty())
                    break;
                 else
                 {
                     it = myset.begin();
                        mystack.push(*it);
                        col[*it] = 2;
                 }
                }
            }
              ll z=0;z = b+1;
            if(flag==0)
            {

                printf("Scenario #%lld:\n",z);
                printf("No suspicious bugs found!\n");
            }
            else
               {
               printf("Scenario #%lld:\n",z);
                printf("Suspicious bugs found!\n");

                }
        }
        }
