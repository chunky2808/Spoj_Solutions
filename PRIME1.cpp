#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,low,high,p,z=0;
    int arr[32001];  bool arr2[32001];
    memset(arr2,false,sizeof(arr2));
    vector <int> pq;
    for(c=2;c<=sqrt(32001);c++)
    {
        for(d=2*c;d<=32001;d=d+c)
        {
            arr2[d] = true;
        }
    }
    arr2[1]=arr2[0]=true;
    for(c=2;c<=32001;c++)
    {
        if(arr2[c]==false)
       {
           pq.push_back(c);//cout<<c<<"\n";}
    }}
    cin>>i;
    for(z=0;z<i;z++)
    {
    cin>>a>>b;//100 200
    int limit = b-a+1,q=a;;
   // limit = sqrt(limit);
    bool mark[limit+1];
    memset(mark,false,sizeof(mark));
    low = a;//100
    high = b;//200
    /*for(c=0;c<pq.size();c++)
    {
     cout<<pq[c]<<"\n";
    }}}
    */
    if(a<2)a=2;else{}
    //cout<<pq[0]<<"\n\n";
    for(c=0;c<pq.size();c++)
     {
         if(pq[c]>sqrt(b))break;else{}
         p = low/pq[c];//50
         p = p*pq[c];
         if(p<a){p = p + pq[c];}else;
         while(p<32001 && arr2[p]!=true){p = p+pq[c];}
         for(d=p; d<=b; d = d + pq[c])
         {
             if(d<a){}
             else /*if(arr2[d]==true)*/{
             mark[d-q]=true;}
            //e=d-a;
             //cout<<d<<" "<<c<<" "<<e<<" "<<mark[d-a]<<"\n";
         }
     }
if(q==1)mark[0]=true;else{}
    for(c=0;c<limit;c++)
     {d=0;//cout<<mark[c]<<"\n";
         if(mark[c]==false)
         {
             d = c+q;
             cout<<d<<"\n";
         }
     }
    }
}
