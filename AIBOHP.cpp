//time complexity - O(n^2)


/*approach
find lcs between string and reverse of string and subtract it from length of string.
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
#define Me(a,b) memset(a,b,sizeof(a))4
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
cin.ignore();
string ch,ch2;
For(b,0,a)
{
    getline(cin,ch);
    ch2 = ch;
    reverse(ch2.begin(),ch2.end());
    c = ch.size();
    int arr[c+2][c+2];
    for(d=0;d<c;d++)
    {
        arr[d][0]=0;
        arr[0][d]=0;
    }
    for(d=1;d<=c;d++)
    {
        for(e=1;e<=c;e++)
        {
            if(ch[e-1]==ch2[d-1])
            {
                arr[d][e] = arr[d-1][e-1]+1;//if character are same 
            }
            else
            {
                arr[d][e]  = max(arr[d-1][e],arr[d][e-1]);
            }
        }
    }
    c = c - arr[c][c];
    cout<<c<<"\n";
}}
