#include<bits/stdc++.h>

//Time  complexity O(T*N*(logN))
typedef long long int ll;
using namespace std;
ll arr[1000000];
int main()
{
    ll a,b,c,d,e,f,g,h,i,j,k;
    cin>>a;
    memset(arr,0,sizeof(arr));
    set<ll> my;
    set<ll> :: iterator it;
    for(b=0;b<a;b++)
    {
        cout<<"\n";
        cin>>c;string ch;
        for(d=0;d<c;d++)
        {
            cin>>ch;cin>>e;
            arr[e]++;
            my.insert(e);
        }g=0;h=0;
        while(1)
        {
            g++;
            it  = my.begin();
            arr[(*it)]--;
            h = h + abs(g-(*it));
            if(arr[*it]==0)my.erase(*it);
            if(my.size()==0)break;
        }
        cout<<h<<"\n";
    }
}
