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
    For(d,0,c)
    {
        cin>>arr[d];
    }
    sort(arr,arr+c);
    ll flag=0;
    for(d=c-1;d>=0;d--)
    {
        f = arr[d];
        if(f>0){
        for(e=d-1;e>=0;e--)
        {if(arr[e]>0)
            {arr[e]--;f--;}
            if(f==0)break;
        }
        if(f==0)
        arr[d]=0;
        else
        {flag=1;
        arr[d]=f;}}
/*
    For(h,0,c)
    cout<<arr[h]<<" ";
    cout<<"\n";
*/
    }



    if(flag==0)
    {
        For(d,0,c)
        {//cout<<arr[d]<<" ";
            if(arr[d]>0 || arr[d]<0)
                flag=1;
        }
        if(flag==1)
            cout<<"SAD\n";
        else
            cout<<"HAPPY\n";
    }
    else
        cout<<"SAD\n";
}}
