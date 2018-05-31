#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h;
    cin>>a;
    int ar[a+1];
    set<int> myset;
    for(b=0;b<a;b++)
    {
        cin>>c;
       ar[b] = c;
        cin>>d;
        for(e=0;e<d;e++)
        {
            cin>>f;
            myset.insert(f);
        }

    }
    for(b=0;b<a;b++)
        {
     if(!myset.empty() && binary_search(myset.begin(),myset.end(),ar[b]) )
        {
            myset.erase(ar[b]);
        }}
   set<int> :: iterator it;
   cout<<myset.size()<<"\n";

}
