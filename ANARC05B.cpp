
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
ll a,b,c,d,e,f,g,h,flag=0;
while(1)
{
    cin>>a;
    if(a==0)break;
    int arr[a+3];
    For(b,1,a+1)cin>>arr[b];
    cin>>c;
    int arr2[c+3];
    For(b,1,c+1)cin>>arr2[b];
    d=1;e=1;arr[0]=arr2[0] = 0;
    while(d<=a || e<=c)
    {
        if(d<=a || e<=c)
        {
            if(arr[d]==arr2[e])
            {
                arr[d]+=arr[d-1];
                arr2[e]+=arr2[e-1];
                arr[d]=arr2[e]=max(arr[d],arr2[e]);d++;e++;
            }
            else
            {
                if(arr[d]>arr2[e])
                {
                    arr2[e]+=arr2[e-1];e++;
                }
                else
                {
                    arr[d]+=arr[d-1];d++;
                }
            }

        }
        else if(d>a)
        {
         arr2[e]+=arr2[e-1];e++;
        }
        else if(e>c)
        {
         arr[d]+=arr[d-1];d++;
        }
   //    cout<<d<<" "<<arr[d]<<" "<<e<<" "<<arr2[e]<<"\n";
    }
    cout<<max(arr[a],arr2[c])<<"\n";
}
}
