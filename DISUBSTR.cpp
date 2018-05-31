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
    #define fs(a) fastscan(a);
int main()
{
    int a,b,c,d,e,f,g,h,i;
    fs(a);//cin.ignore();
    for(b=0;b<a;b++)
    {
        string ch,ch2;
        cin>>ch;
       // cout<<ch;
        c = ch.size();
        set<string>myset;f=0;
        for(d=0;d<c;d++)
        {f=0;
        ch2.push_back(ch[d]);//cout<<ch2<<" "<<ch[d]<<"\n";
        myset.insert(ch2);
         for(e=d+1;e<c;e++)
         {
               ch2.push_back(ch[d]);
       //      cout<<ch2<<"\n";
             myset.insert(ch2);
         }
         ch2.clear();
        }
       printf("%d\n",myset.size());
    }
}
