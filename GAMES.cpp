#include<bits/stdc++.h>
using namespace std;
int pow (int a,int b)
{
    int c=0,d=1;

    while(c!=b)
    {
        d = d*a;
        c++;
    }
    return d;
}
int main()
{
    int a,b,c,d,e,f,h,i,j,k,zz,yy=0;
    cin>>a;
    double dd,g;k=0;j=0;
    char ch[100000];
    for(b=0;b<a;b++)
    {
        cin>>ch;k=0;zz=0;j=0;yy=0;
        int fi=0,to=0;
        c = strlen(ch);e=0;
        for(d=0;d<c;d++)
        {
            if(ch[d]=='.')
            {
                e++;
            }
            else if(e>0)
            {
                f = (int)ch[d] -48;
                zz = (zz*j) + f;
                j = pow(10,1);yy++;
            }
        }
       //cout<<zz<<" "<<yy<<"\n";
        if(yy==0)
        {
            cout<<1<<"\n";
        }
        //zz = no after decimal point , yy = no of digits
        else{
        fi=0;to=0;
        while(1)
        {
            if(zz>1 && (zz%2)==0)
            {
                to++;
                zz=zz/2;
            }
            else
                break;
        }
        while(1)
        {
            if(zz>1 && (zz%5)==0)
            {
                fi++;
                zz=zz/5;
            }
            else
                break;
        }
        int qq=0,ww=0;
        long long int rr=0,pp=0;
        if(to>=yy){qq=0;}
        else qq = yy-to;
       if(fi>=yy) {ww=0;} else ww = yy-fi;
        rr = (pow(2,qq));
        pp = pow(5,ww);
        rr = rr*pp;
       // cout<<to<<" "<<fi<<" "<<qq<<" "<<ww<<"\n";
printf("%lld\n",rr);
    }}
}
