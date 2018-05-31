#include<bits/stdc++.h>
using namespace std;
//single dfs
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
fastscan(a);

vector <int> arr[a+1];
int arr2[a+1];
memset(arr2,0,sizeof(arr2));
bool vis[a+1];
memset(vis,false,sizeof(vis));
if(a==0 || a==1)
   printf("0\n");
else{
    for(b=0;b<a-1;b++)
    {
    fastscan(c);fastscan(d);;
    arr[c].push_back(d);
    arr[d].push_back(c);
    }
stack <int> my;

int ma=0,mi=0;
my.push(1);
while(!my.empty())
{
    e = my.top();
    my.pop();
    vis[e] = true;
    for(g=0;g<arr[e].size();g++)
    {
        if(vis[arr[e][g]]==false)
        {
            my.push(arr[e][g]);
            arr2[arr[e][g]] += arr2[e]+1;
           }
    }

}
mi =0; ma=0;
for(g=1;g<=a;g++)
{
    if(arr2[g]>mi)
        {mi=arr2[g];ma=g;}
}

memset(arr2,0,sizeof(arr2));
memset(vis,false,sizeof(vis));
stack <int> my2;
//cout<<mi<<"\n";
my2.push(ma);
while(!my2.empty())
{
    e = my2.top();
    my2.pop();
    vis[e] = true;
    for(g=0;g<arr[e].size();g++)
    {
        if(vis[arr[e][g]]==false)
        {
            my2.push(arr[e][g]);
            arr2[arr[e][g]] += arr2[e]+1;
           }
    }

}
sort(arr2+1,arr2+a+1);
printf("%d\n",arr2[a]);
}}
