#include<bits/stdc++.h>
//using next_permutation function in c++ STL

typedef int ll;
using namespace std;
int main()
{
    ll a,b,c,d,e,f,g,h,i,j,k;
    cin>>a;
    i=0;
    for(b=0;b<a;b++)
    {
        cin>>c;i=0;j=0;
        ll arr[c+1];
        arr[c] = -1;
        for(d=0;d<c;d++)
        {
            cin>>arr[d];
        }
        int flag=0;
        for(d=0;d<c-1;d++)
        {
            if(arr[d]<arr[d+1])
            {
                flag=1;break;
            }
        }
        next_permutation(arr,arr+c);
        if(flag==0){cout<<"-1\n";}
        else{
        for(d=0;d<c;d++)
        {
            cout<<arr[d];
        }
        cout<<"\n";
        }
    }}
