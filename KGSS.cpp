#include<bits/stdc++.h>
using namespace std;
#define maxi 100000009;
//0 for high
//1 for low
int ma=0,mi=0;
void build(int seg[][2],int low,int high,int pos,int arr[])
{
    int mid;
    if(low==high)
    {
         seg[pos][0] = arr[low];
         seg[pos][1] = 0;
    }
    else
    {
        mid = (low+high)/2;
        build(seg,low,mid,(2*pos)+1,arr);
        build(seg,mid+1,high,(2*pos)+2,arr);
        seg[pos][0] = max(seg[(2*pos)+1][0],seg[(2*pos)+2][0]);
        seg[pos][1] = min(max((seg[(2*pos)+1][0]),seg[(2*pos)+2][1]),max((seg[(2*pos)+2][0]),seg[(2*pos)+1][1]));
    }
}

int query(int seg[][2],int qlow,int qhigh,int low,int high,int pos,int arr[])
{
    int mid;
    if(qlow<=low && qhigh>=high)
    {
        if(seg[pos][0]>ma)
        {
                mi = max(ma,seg[pos][1]);
                ma = seg[pos][0];
        }
        else
        {
            mi = max(mi,seg[pos][0]);
        }
        return 0;//total overlap
    }
    else if(qlow>high || qhigh<low )
    {
        //no overlap
        return 0;
    }
    else
    {
        mid = (low+high)/2;
        query(seg,qlow,qhigh,low,mid,(2*pos)+1,arr);
        query(seg,qlow,qhigh,mid+1,high,(2*pos)+2,arr);
        return 0;
    }
}


int update(int seg[][2],int low,int high,int pos,int idx,int value,int arr[])
{
    int mid;
    if(low==high)
    {
        seg[pos][0] = value;seg[pos][1] = 0;
        arr[idx] = value;
    }
    else
    {
        mid = (low+high)/2;
        if(idx>=low && idx<=mid)
        {update(seg,low,mid,(2*pos)+1,idx,value,arr);}
else
     {update(seg,mid+1,high,(2*pos)+2,idx,value,arr);}
        seg[pos][0] = max(seg[(2*pos)+1][0],seg[(2*pos)+2][0]);
        seg[pos][1] = min(max((seg[(2*pos)+1][0]),seg[(2*pos)+2][1]),max((seg[(2*pos)+2][0]),seg[(2*pos)+1][1]));
    }
}

int seg[2000005][2];

int arr[2000005];
int main()
{

    int a,b,c,d,e,f,g,h,i,j,k,l;
    cin>>a;int arr[a+1];
    for(b=0;b<a;b++)
    cin>>arr[b];
    build(seg,0,a-1,0,arr);
    cin>>c;char ch;
    for(d=0;d<c;d++)
    {
        cin>>ch>>e>>f;mi=0;ma=0;
        if(ch=='Q')
        {e--;f--;
        query(seg,e,f,0,a-1,0,arr);
        cout<<ma+mi<<"\n";;
        }
        else
        {
        e--;
        update(seg,0,a-1,0,e,f,arr);
        }
    }
    }

