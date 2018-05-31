#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,g,h,i;
    cin>>a;
    for(b=0;b<a;b++)
    {
        cin>>c>>d;
        long long int arr[c];long long int arr2[c];
        for(e=0;e<c;e++)
            cin>>arr[e];
        sort(arr,arr+c);
        if(d==1)
            cout<<"0\n";
        else{
                d = d-1;
                f=d;
        long long int p= 1000000000,q;//1 2 3 4 5
           for(e=0;e<c-f;e++)
           {
               q = arr[d]-arr[e];
            if(q<p)
                p=q;
            else{}
               d++;
           }
           cout<<p<<"\n";}}}
