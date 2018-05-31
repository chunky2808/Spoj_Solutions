#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    scanf("%d",&a);
    int arr[a+1];
    for(b=0;b<a;b++)
        scanf("%d",&arr[b]);
    scanf("%d",&c);
    deque < pair <int,int > > my;
    for(b=0;b<a;b++)
    {
        while(!my.empty() && my.back().first<=arr[b])
        {
            my.pop_back();
        }
        my.push_back(make_pair(arr[b],b));

        while(!my.empty() && my.front().second<=b-c)
            my.pop_front();

        if(b>=c-1)
           printf("%d ",my.front().first);

    }
    printf("\n");
}
