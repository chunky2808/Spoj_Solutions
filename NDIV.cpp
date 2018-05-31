    #include<bits/stdc++.h>
    using namespace std;
    typedef  int ll;
    ll pa[32100];
   ll ap[32100];

    int main()
    {
        ll a,b,c,d,e,f,g,i,j,k;
        ll h=0,ans=0,p=0;
       scanf("%d%d%d",&a,&b,&c);
        d=0;
        memset(pa,false,sizeof(pa));
        for(e=2;e<=sqrt(32000);e++)
        {
            if(pa[e]==false){
            for(f=2*e;f<=32000;f=f+e)
            {
          pa[f]=true;
            }
        }}
        k=0;
        for(e=2;e<=32000;e++)
        {
            if(pa[e]==false)
           ap[k++] = e;
        }
//cout<<k<<"\n";

         ans=0;
        for(e=a;e<=b;e++)
    {
        i =e;
        ll yy=sqrt(i);yy++;
       p=1;ll oo=0;ll flag =0;
        if(e==0)
        {h=0;}
        else if(e==1)
            {h=1;}
        else
           {
               h=0;
               flag=0;
                   for(int o=0;o<3431;o++)
                   {
                       h=1;
                       if(i>=ap[o] && yy>=ap[o])
                       {
                          while(i%ap[o]==0)
                          {
                              h++;
                              i=i/ap[o];
                           }
                         }
                       else
                        {flag=1;break;}
                     p = p*h;
                     h=1;
                    }
                   if(i!=1)
                   {p *= 2;}
                   else
                   {if(flag==1)
                       p = p*h;
                    }
                h=p;
           }
           if(h==c)
           {ans++;}
           }
           printf("%d\n",ans);
           }

