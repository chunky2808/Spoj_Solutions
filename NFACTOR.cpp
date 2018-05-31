        #include<bits/stdc++.h>
        using namespace std;
        typedef  int ll;
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
        ll pa[1000001];
       ll ap[1000001][2];
    ll o[1000001][11];
        int main()
        {
            ll a,b,c,d,e,f,g,i,j,k;

            ll h=0,ans=0,p=0;
           d=0;
            memset(pa,false,sizeof(pa));
            memset(ap,0,sizeof(ap));
            memset(o,0,sizeof(o));
            pa[0]=pa[1]=true;
            ap[0][1]=0;
            for(e=2;e<=1000000;e++)
                ap[e][1]=e;

            for(e=2;e<=sqrt(1000000);e++)
            {
                if(pa[e]==false){
                for(f=2*e;f<=1000000;f=f+e)
                {
              pa[f]=true;
              ap[f][0]++;
              while(ap[f][1]%e ==0)
                {
              ap[f][1] = ap[f][1]/e;
                }
            }}
            }
            for(e=1;e<=1000000;e++)
            {
                if(pa[e]==false)
                   {ap[e][0]++;ap[e][1] =1;}
            }
    //        cout<<ap[1009][0]<<" "<<ap[1009][1]<<"\n";;

            for(e=1;e<=1000000;e++)
            {
                if(ap[e][1]>1000 && pa[ap[e][1]] == false)
                    ap[e][0]++;
            }

            for(e=1;e<=1000000;e++)
            {
             o[e][ap[e][0]]++;
            }
            for(e=1;e<=1000000;e++)
            {
                for(f=0;f<=10;f++)
                {
                    o[e][f] += o[e-1][f];
                }
            }
           // cout<<ap[1009][0]<<" "<<ap[4036][0]<<" "<<ap[4036][1]<<" ";

           fastscan(g);
            for(i=0;i<g;i++){
           fastscan(a);fastscan(b);fastscan(c);k=0;
            if(a==0 && b>a)
                a =1;
            //cout<<o[b][c]<<" "<<o[a-1][c]<<"\n";
            k = o[b][c] - o[a-1][c];
            printf("%d\n",k);}
        }

