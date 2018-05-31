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
 fastscan(a);
     for(b=0;b<a;b++)
    {
        fastscan(c);fastscan(d);
        e = d+2;
        if(c==d || c==e)
        {
            if(c==d)
            {
                if(c==1)
                {
                    printf("1\n");
                }
                else if(c%2==0)
                {
                    i=0;i=c*2;
                    printf("%d\n",i);
                }
                else if(c%2!=0)
                {
                    f = c*2;f--;
                    printf("%d\n",f);
                }
            }
            else
            {
                if(c%2==0)
                {
                    i=0;i = c+d;
                    printf("%d\n",i);
                }
                else
                {
                    i = 0;i = c+d-1;printf("%d\n",i);
                }
            }
        }
        else
        {
            printf("No Number\n");
        }
    }
}
