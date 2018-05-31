#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k=0;
    cin>>a>>b;
    cin>>c;
    for(d=0;d<c;d++)
    {
        cin>>e>>f>>g>>h>>i>>j;k=0;
        if(e+1<=a)
        {
            if(((abs(e+1-g)+abs(f-h))>1) && (abs(e+1-i)+abs(f-j))>1)
                k++;
        }
        if(e-1>=1)
        {
            if(((abs(e-1-g)+abs(f-h))>1) && (abs(e-1-i)+abs(f-j))>1)
                k++;
        }
        if(f+1<=b)
        {
            if(((abs(e-g)+abs(f+1-h))>1) && (abs(e-i)+abs(f+1-j))>1)
                k++;
        }

        if(f-1>=1)
        {
            if(((abs(e-g)+abs(f-1-h))>1) && (abs(e-i)+abs(f-1-j))>1)
                k++;
        }
        if(k<=0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }}
