#include<bits/stdc++.h>
using namespace std;
void fastscan(int &x)
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
    int a,b,c,d,e,f,g,h,i;
    fastscan(a);fastscan(b);
    vector <int> arr[a+1];
    bool visited[a+1];
    int arr2[a+1];
    memset(visited,false,sizeof(visited));
    memset(arr2,0,sizeof(arr2));
    for(c=0;c<b;c++)
    {
        fastscan(d);fastscan(e);
        arr[d].push_back(e);
        arr[e].push_back(d);
    }
    if(b!=a-1){printf("NO\n");}

    else{
             int flag=0;
             for(c=1;c<=a;c++)
                arr2[c]=c;
        for(c=1;c<=a;c++)
        {
            for(d=0;d<arr[c].size();d++)
            {
                if(arr[c][d]==c)
                {
                    flag=1;break;
                }
            }
        }

        for(c=1;c<=a;c++)
        {
          visited[c] =true;
            for(d=0;d<arr[c].size();d++)
            {
                if(arr2[c]==arr[c][d]){}
                else{
                if(arr2[arr[c][d]]!=arr[c][d])
                {
                 flag =1;break;
                }else
             arr2[arr[c][d]]=c; }
            }
            if(flag==1)
                break;
        }

        int hh=0;
        for(c=1;c<=a;c++)
        {
            if(visited[c]==true)
            {
                hh++;
            }
        }
       // cout<<flag<<" "<<hh<<"\n";
    if(flag==0 && hh==a)
        printf("YES\n");
    else
       printf("NO\n");
}}


//union find (2Nd method)
