#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,e,f,g,h,i,j,k;
cin>>a;
for(b=0;b<a;b++)
{

vector< pair<int,int> >v;
 cin>>c;
    for(d=0;d<c;d++)
    {
        cin>>e>>f;
        v.push_back(pair<int,int>(f,e));
    }
    sort(v.begin(),v.end());
    g=0;int it;h = v[0].first;j=0;
for(it=0;it<c;it++)
{
//cout<<v[it].second<<" "<<v[it].first<<"\n";
    if(it==0)g++;
    else{
        if(v[it].second>=h){g++;h = v[it].first;}
    }}


    cout<<g<<"\n";
    }}
