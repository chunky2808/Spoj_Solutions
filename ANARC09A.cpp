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
char ch[2500];g=1;
while(1)
{
    scanf("%s",&ch);
    //cout<<ch<<"\n";
    a = strlen(ch);//.size();
    For(b,0,a)
    {
        if(ch[b]=='-')
        {flag=1;break;}
    }
    if(flag==1)break;
   // stack<char> my;
    ll jj=0,oo=0,po=0;
    For(b,0,a)
    {
    if(ch[b]=='{')
        {oo++;
        }
    else if(ch[b]=='}')
    {
        oo--;
        if(oo<0)
        {
          po++; oo=1;
        }
    }
    }
        cout<<g<<". "<<po + oo/2<<"\n";
    g++;
    }}


