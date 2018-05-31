#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void fastscan(ll &x)
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
    ll a,b,c,d,e,f,g,i,j,l,h,p,q;
    fastscan(a);
    for(b=0;b<a;b++)
    {cout<<"\n";
        string ch;
        getline(cin,ch);//48-57
        c = ch.size();
        ch[c]='a';
        if(c==0)b--;
        else{
        e=0;f=0;g=0,h=0,i=0,j=0;l = 0;p=0;q=0;
        bool flag=0,flag2=0;
        for(d=0;d<c;d++)
        {

            if(ch[d]>=48 && ch[d]<=57)
            {
                   if(flag==0){
                if(g==0 && h==0 && i==0 && j==0)
                {e = (10*e) + (ch[d]-48);p++;}
                else
                {l = (10*l) + (ch[d]-48);q++;flag2=1;}
                if(p>0 && q>0)
                {
                if(ch[d+1]==' '|| ch[d+1]=='/' || ch[d+1]=='*' || ch[d+1]=='+' || ch[d+1]=='-' || ch[d+1]=='=')
                  {
                         if(g>0)
                    {
                    e = e + l;g=0;l=0;
                    }
                    else if(h>0)
                    {
                    e = e - l;h=0;l=0;

                    }
                    else if(i>0)
                    {

                    e = e * l;l=0;i=0;
                    }
                    else if(j>0)
                    {

                    e = e / l;l=0;j=0;
                    }

                        flag=1;flag2=0;
                }}}
                else
                {
                  l = (10*l) + (ch[d]-48);flag2=1;
                  if(ch[d+1]==' '|| ch[d+1]=='/' || ch[d+1]=='*' || ch[d+1]=='+' || ch[d+1]=='-' || ch[d+1]=='=')
                  {//cout<<d<<" "<<g<<" "<<h<<" "<<i<<" "<<j<<"\n";
                      if(g>0)
                    {
                    e = e + l;g=0;l=0;
                    }
                    else if(h>0)
                    {
                    e = e - l;h=0;l=0;

                    }
                    else if(i>0)
                    {

                    e = e * l;l=0;i=0;
                    }
                    else if(j>0)
                    {

                    e = e / l;l=0;j=0;
                    }
                     flag2=0;
               } }

            }
            else if(ch[d]=='=')
            {
              if(e>0 || l>0)
                {
                  flag=1;
                    if(g>0)
                    {
                        //cout<<e<<" "<<l<<"\n";
                    e = e + l;g=0;l=0;
                    }
                    else if(h>0)
                    {
                        //cout<<e<<" "<<l<<"\n";
                    e = e - l;h=0;l=0;

                    }
                    else if(i>0)
                    {
//cout<<e<<" "<<l<<"\n";
                    e = e * l;l=0;i=0;
                    }
                    else if(j>0)
                    {
//cout<<e<<" "<<l<<"\n";
                    e = e / l;l=0;j=0;
                    }

//cout<<d<<" "<<e<<"\n";
                    //cout<<e<<"\n";
                }flag2=0;

            }
        else if(g>0 || h>0 || i>0 || j>0)
        {
               if((e>0 && f>0)&& flag2==1)
                    {

                  flag=1;
                    if(g>0)
                    {
                    e = e + l;g=0;l=0;
                    }
                    else if(h>0)
                    {
                    e = e - l;h=0;l=0;

                    }
                    else if(i>0)
                    {
                    e = e * l;l=0;i=0;
                    }
                    else if(j>0)
                    {
                    e = e / l;l=0;j=0;
                    }}
                    if(ch[d]=='+')g++;
             else if(ch[d]=='-')h++;
             else if(ch[d]=='*')i++;
             else if(ch[d]=='/')j++;

flag2=0;
        }
         else if(ch[d]==' ')
            {
                if(e>0 && l>0)
                {
                  flag=1;
                    if(g>0)
                    {
                    e = e + l;g=0;l=0;
                    }
                    else if(h>0)
                    {
                    e = e - l;h=0;l=0;
                    }
                    else if(i>0)
                    {
                    e = e * l;l=0;i=0;
                    }
                    else if(j>0)
                    {
                    e = e / l;l=0;j=0;
                    }
                    flag2=0;
                }
            }

            else if(ch[d]=='+' ||ch[d]=='-' ||ch[d]=='*' ||ch[d]=='/' )
            {
             if(ch[d]=='+')g++;
             else if(ch[d]=='-')h++;
             else if(ch[d]=='*')i++;
             else if(ch[d]=='/')j++;
            }
        }

      printf("%d\n",e);}
    }
    }
