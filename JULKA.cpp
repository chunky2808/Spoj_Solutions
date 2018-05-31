#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
for(a=0;a<10;a++)
{
    int b,c,d,e,f,g,h,i,j,k,vv=0;;
    char ch[110];
    char ch2[110];
    char ch3[110];
    char ch4[110];
    char ch5[110];

    char rr,tt;
        cin>>ch;
       // cin.ignore();
        cin>>ch2;
        d = strlen(ch);
        e = strlen(ch2);int ui=0;

        if(d==1 && e==1 && ch[0]=='0' && ch2[0]=='0')
{
    cout<<0<<"\n"<<0<<"\n";
}
else{

        for(f=0;f<d;f++)
        {
         if(ch[f]<=48)
         {
             ui++;
         }
         else
            break;
        }
        if(ui>0)
        {
            d=d-ui;
            for(f=0;f<d;f++)
            {
                ch[f] = ch[ui];
                ui++;
            }
        }else{}
        ui=0;
        for(f=0;f<e;f++)
        {
            if(ch2[f]<=48)
            {
               ui++;
            }
            else
                break;
        }
        if(ui>0)
        {
            e =e-ui;
            for(f=0;f<e;f++)
            {
                ch2[f] =ch2[ui];
                ui++;
            }
        }else{}
        for(f=0;f<d;f++)
            {ch5[f] = ch[f];}
            vv=d;
        g = e-1;k=0;

        for(f=d-1;f>=0;f--)
        {
            if(g<0)
                break;
       // cout<<f<<"\n";//9999999 99
        h = int(ch[f])-48 ;
        i = int (ch2[g]) -48;
        if(k>0)
        {
           h= h+k;k--;
        }else{}
   // cout<<h<<" "<<i<<"\n";
        h = h+i;
        if(h>=10)
        {
            h = h-10;
            k++;
        }
        else{}
        h = h+48;
       // cout<<h<<" ";
        ch[f] = h;
        //cout<<ch[f]<<"\n";
        if(g==0)
            break;
        else{
        g--;}
        }
       h=0;
       int mm=0;
       while(k>0)
        {
         if(f>0)
            {
                mm++;
                h = int(ch[--f])-48;
                h = h+k;
                k--;
              //  cout<<"value"<<h<<"\n";
                if(h>=10)
                {
                    h = h-10;
                    k++;
                }
                else{}
                h=h+48;
                ch[f] =h;}
                else
                    break;
         //cout<<k<<"\n";
            }
         if(k>0)
         {
            d++;
        for(h=0;h<d;h++)
        {
        if(h==0)
        {rr = ch[0];
        ch[0] = 49;
        }
        else{
        tt = ch[h];
        ch[h] = rr;
        rr=tt;
        }
        }

         }
         else{}

k=0;int tt=0;int ii=0;
int zz=0,rr= int(ch[d-1]);
if(rr%2==0){}
else{zz=1;}
k=0;int re=1;tt=0;
         for(f=0;f<d;f++)
            {
            g = (int)ch[f] -48;
            //cout<<f<<" "<<g<<" "<<k<<" "<<tt<<"\n";
            if(k>0)
            {
                g = 10 + g ;
                k--;re=0;
            }
            else{}
            if(tt==1)
            {
              g = 10 + g;
            if(g%2==0)
                {
                    g = g/2;
                    g = g+48;
                }
                else{
                    g= g/2;
                    g = g+48;
                    k++;re=1;
                }
              tt=0;
              ch3[ii++] = g;
            }
            else{
            if(g<2)
            {//cout<<f<<" "<<g<<"\n";
                if(g==0)
                {
                    ch3[ii++] = g+48;
                }
                else{
                tt = g;
                if(re==0)
                {
                    ch3[ii++] = '0';
                }else{}re=0;
                 }
                 }
            else
            {
                if(g%2==0)
                {
                    g = g/2;
                    g = g+48;
                }
                else{
                    g = g/2;
                    g = g+48;
                    k++;re=1;
                }
                ch3[ii++]= g;
            }
            }}
            if(tt==1)
            {
                ch3[ii++] = '0';
            }else{}
            for(f=0;f<ii;f++)
                cout<<ch3[f];
            cout<<"\n";//x

            k=0;int bb=ii-1;tt=0;int r,p;
            for(f=vv-1;f>=0;f--)
            {
                r = (int)ch5[f]-48;
                p = (int)ch3[bb]-48;
              //  cout<<r<<" "<<p<<"\n";
               if(zz>0 && f==(vv-1))
               {
                   r--;
               }
               else{}
                if(tt>0)
                {
                    r--;tt=0;
                }
                else{}
                if(p>r)
                {
                    r = r+10;
                    r = r-p+48;
                    ch4[k++] = r;
                  //  cout<<r<<"\n";
                    tt++;
                }
                else
                {
                    r = r-p+48;
                    ch4[k++] = r;
                }
                if(bb==0)
                    break;
                else
                    bb--;
            }
            if(tt>0)
            {
                r = (int)ch5[--f];
                r--;
                ch4[k++] =r;
                tt=0;
            }
            else{}
            int paras=0;bb=0;
                for(f=k-1;f>=0;f--)
                {
                 bb = int(ch4[f])-48;
                 if(bb>0)
                 {
                     paras++;
                 }
                 else{}
                 if(paras>0)
                    cout<<ch4[f];}
                    if(paras==0)
                        cout<<0;
                    else{}
            cout<<"\n";}
}
    }

