#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int a,b,c,d,e,f,g,h,i,j;
    cin>>a;
    int arr[a+2];
    arr[a]=-12;
    for(b=0;b<a;b++)
    cin>>arr[b];
    cin>>c;
    sort(arr,arr+a);
    map<int,int> my;
    map<int,int> my2;
    map<int,int> s1;
    map<int,int> s2;
    int y=0;
    for(d=0;d<a;d++)
    {y=y+arr[d];//cout<<y<<"\n";
        if(my[arr[d]]==0)
        {
            e = d;
            my[arr[d]]=e;s1[arr[d]]=y;
        }
        if(arr[d]!=arr[d+1])
        {
            my2[arr[d]]=d;
            s2[arr[d]]=y;//cout<<s2[arr[d]]<<" ";
        }
    }
    for(d=0;d<c;d++)
    {
    cin>>e>>f;
    if(binary_search(arr,arr+a,f))
    {
        if(binary_search(arr,arr+a,e))
        {
            h=0;h = s2[f]-s1[e-1];

        }
        else
            {
        int u = upper_bound(arr,arr+a,e)-arr;
        if(u!=a)
        {
            h=0;
         //   h = my[arr[u]];i = my2[f];
            h = s2[f]-s1[arr[u]-1];//+1;
        }
        else
        {
            h = s2[f]-s1[f-1];
        }}
    }
   else if(binary_search(arr,arr+a,e))
    {
        if(binary_search(arr,arr+a,f))
        {
            h=0;
            //h=my2[f];
            //i = my[e];
            h = s2[f]-s1[e-1];//h+1;
        }
        else{
        int u = lower_bound(arr,arr+a,f)-arr;
        if(u!=a)
        {
            h=0;
           // h = my2[arr[u]];i = my[e];
            h = s2[arr[u]]-s1[e-1];//h+1;
        }
        else
        {
            h = s2[e]-s1[e-1];
        }}
    }
    else
    {
        int u = upper_bound(arr,arr+a,e)-arr;
        int uu = lower_bound(arr,arr+a,f)-arr;
        if(u!=a)
        {
            if(uu!=a)
            {
                h = s2[arr[uu]]-s1[arr[u]-1];//+1;
            }
            else
            {
                h = s2[arr[u]]-s1[arr[u]-1];//+1;
            }
        }
       else if(uu!=a)
        {
            if(u!=a)
            {
                h = s2[arr[uu]]-s1[arr[u]-1];//+1;
            }
            else
            {
                h = s2[arr[uu]]-s1[arr[uu]-1];//+1;
            }
        }
        else
        {
            h=0;
        }
    }
    cout<<h<<"\n";}}
