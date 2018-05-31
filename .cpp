#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,a,b) for(i=a;i<b;i++)
#define Me(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mp make_pair
#define F first
#define S second

#define fs(a) fastscan(a)
#define ss set<ll>
#define vv vector<ll>
int main()
{
ll a,b,c,d,e,f,g,h;
cin>>a;
For(b,0,a)
{
    cin>>c>>d;
    ll arr[c+2][d+2],arr2[c+1][d+1];
    memset(arr,0,sizeof(arr));

    memset(arr2,0,sizeof(arr2));
    For(e,0,c)
    {
        For(f,0,d)
        {
            cin>>arr[e][f];
        }
    }
    For(e,0,d)
    {
    arr2[0][e] = arr[0][e];
    }

    For(e,0,c)
    {
        For(f,0,d)
        {
            if(e!=0)
            {

                if(f==0)
                {
                 arr2[e][f] = max(arr2[e][f],arr2[e-1][f]+arr[e][f]);
                 arr2[e][f] = max(arr2[e][f],arr2[e-1][f+1]+arr[e][f]);
                }
                else if(f==d-1)
                {
                 arr2[e][f] = max(arr2[e][f],arr2[e-1][f]+arr[e][f]);
                 arr2[e][f] = max(arr2[e][f],arr2[e-1][f-1]+arr[e][f]);
                }
                else
                {
                arr2[e][f] = max(arr2[e][f],arr2[e-1][f]+arr[e][f]);
                 arr2[e][f] = max(arr2[e][f],arr2[e-1][f+1]+arr[e][f]);
                 arr2[e][f] = max(arr2[e][f],arr2[e-1][f-1]+arr[e][f]);
                }
            }
        //    cout<<e<<" "<<f<<" "<<arr2[e][f]<<"\n";
        }
    }
        ll p=0;
        For(e,0,d)
        {
            p = max(p,arr2[c-1][e]);
        }
        cout<<p<<"\n";
}
}
