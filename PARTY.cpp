//time complexity -
//space complexity -

//Submitted by Chunky_2808

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void fastscan(ll &x)
    {
        bool neg=false;
        register int c;
        x =0;
         while((c=getchar()) < 48);
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
while(1)
{
cin>>a>>b;
if(a==0 && b==0)break;
vector<pair<int,int> >my;
vector<pair<int,int> > :: iterator it;
For(c,0,b)
{
    cin>>d>>e;
    my.pb(mp(d,e));
}
sort(my.begin(),my.end());
ll arr[b+1][a+1],arr2[b+1][a+1];
memset(arr,0,sizeof(arr));
memset(arr2,0,sizeof(arr2));
it = my.begin();

For(c,1,b+1)
{
    For(d,0,a+1)
    {
        if(d!=0)
        {
            if(c==1)
            {
                if(d>=(*it).first)
                {arr[c][d] = (*it).second;arr2[c][d] = (*it).first;
            }
            }
            else
            {
                if(d<(*it).first)
                    {arr[c][d] = arr[c-1][d];arr2[c][d]+= arr2[c-1][d];}
                else
                    {
                        if(arr[c-1][d]<(*it).second+arr[c-1][d-(*it).first])
                        {
                        arr2[c][d] += arr2[c-1][d-(*it).first] + (*it).first;
                        arr[c][d] = arr[c-1][d-(*it).first]  + (*it).second;
                        }
                        else
                        {
                          arr2[c][d]+= arr2[c-1][d];
                          arr[c][d] = arr[c-1][d];
                        }

                    }
            }
        }
    }
    it++;
}
ll aa = arr2[b][a],bb = arr[b][a];
For(c,1,b+1)
{
    For(d,0,a+1)
    {
        if(arr[c][d]==bb)
        {
            aa = min(aa,arr2[c][d]);
        }
    }
    }
cout<<aa<<" "<<arr[b][a]<<"\n";
}
}
