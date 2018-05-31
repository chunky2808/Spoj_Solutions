//time complexity - O(n)
//space complexity -   O(n) 
//can be done in space complexity of O(1) by using temp and temp1 instead of arr[a-1] and arr[a-2]
/*approach 
Finding best sum till date for each element
*/

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
cin>>a;
For(b,0,a)
{
    cin>>c;
    ll arr[c+1];
    ll ar[c+1][2];
    Me(arr,0);
     Me(ar,0);
    For(d,0,c)
    cin>>arr[d];
    if(c==0)
    {
    cout<<"Case "<<1<<": "<<0<<"\n";
    }
    else
    {
    For(d,0,c)
    {
    if(d==0 ||d==1)
    {
        if(d==0)
        {
            ar[d][0] = arr[d];
            ar[d][1] = d;
        }
        else
        {
            if(arr[d]>ar[d-1][0])//if current element bigger than last one
            {
                ar[d][0] = arr[d];
                ar[d][1] = d;
            }
            else//copy last element without adding current
            {
                ar[d][0] = ar[d-1][0];
                ar[d][1] = ar[d-1][1];
            }
        }
    }

    else
    {
    if(ar[d-1][1]+1==d)//adjacent element
    {
    ar[d][0] = ar[d-2][0]+arr[d];
    ar[d][1] = d;
    if(ar[d][0]<ar[d-1][0])//if last element value more than current then replace current value of ar array without adding value of array arr.
    {
    ar[d][0] = ar[d-1][0];
    ar[d][1] = ar[d-1][1];
    }
    }
    else//not adjacent element
    {
      ar[d][0] = ar[d-1][0]+arr[d];
    ar[d][1] = d;
    }
    }
}
cout<<"Case "<<b+1<<": "<<ar[c-1][0]<<"\n";}
}}
