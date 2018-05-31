//time complexity - O(n^2)


/*approach
find lcs between string and reverse of string and subtract it from length of string.
*/

//Submitted by Chunky_2808

#include<bits/stdc++.h>
using namespace std;
typedef int ll;
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

string ch,ch2;

    getline(cin,ch);
    getline(cin,ch2);
    c = ch.size();
    d = ch2.size();
    int arr[c+2][d+2];//8 4
    for(e=0;e<c;e++)
    {
        arr[e][0]=0;
    }
    for(e=0;e<d;e++)
    {
        arr[0][e]=0;
    }

    for(f=1;f<=c;f++)
    {
        for(e=1;e<=d;e++)
        {
            if(ch2[e-1]==ch[f-1])
            {
                arr[f][e] = arr[f-1][e-1]+1;//if character are same
            }
            else
            {
                arr[f][e]  = max(arr[f-1][e],arr[f][e-1]);
            }
        }
    }

    c = arr[c][d];
    printf("%d\n",c);
    }

