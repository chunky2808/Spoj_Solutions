//time complexity -O(nlogn)

//using sliding window algo and set . can also be done in O(N) without using set.

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
a =1;
while(1)
    {
cin>>a;
cin.ignore();
if(a==0)break;

string ch;
getline(cin,ch);
b = ch.size();

queue <char> my;
while(my.size())
    my.pop();
set<char> my2;
my2.clear();
set<char> ::iterator it;
set<char> ::iterator it2;
f=0;
int si[130];Me(si,0);
for(c=0;c<b;c++)
{
    if(my2.size()>=a)
    {
        if(my.size()>f)f = my.size();

    d = my2.size();
    my2.insert(ch[c]);
    it = my2.begin();
    if(my2.size()==d)
    {
     my.push(ch[c]);si[ch[c]]++;
    }
    else
    {
        while(1)
        {
        si[(my.front())]--;
        if(si[my.front()]==0)
            my2.erase(my.front());
        my.pop();
if(my2.size()<=d)break;

        }

      my.push(ch[c]);si[ch[c]]++;
    }

    }
    else
    {
         my.push(ch[c]);
         my2.insert(ch[c]);si[ch[c]]++;
       if(my.size()>f)f = my.size();
    }

 if(my.size()>f)f = my.size();
}
printf("%lld\n",f);
    }}
