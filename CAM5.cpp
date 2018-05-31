#include<bits/stdc++.h>
using namespace std;
//using dfs
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
        printf("\n");
        fastscan(c);
        fastscan(d);
        vector <int> arr[c+1];
        bool ar[c+1];
        memset(ar,false,sizeof(ar));
        set<int> my;
        set <int> ::iterator it;
        for(e=0;e<d;e++)
        {
            fastscan(f);fastscan(g);
            arr[f].push_back(g);
            arr[g].push_back(f);
        }
        int yy=0;
        stack <int> st;

        for(int y=0;y<c;y++)
            my.insert(y);

        st.push(0);yy++;my.erase(0);
       while(!st.empty())
       {
           i = st.top();
           st.pop();my.erase(i);
           ar[i]=true;
           for(int u = 0;u<arr[i].size();u++)
           {
               if(ar[arr[i][u]]==false)
               {
                   st.push(arr[i][u]);
                   ar[arr[i][u]]=true;
               }
           }
           if(st.empty() && !my.empty())
           {yy++;
               it = my.begin();
               st.push(*it);
               ar[*it]=true;
           }
           //cout<<i<<"\n";
       }
       printf("%d\n",yy);
       }

}
