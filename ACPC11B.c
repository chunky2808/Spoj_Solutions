#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,min=0,temp,x;
    unsigned int arr[1001];
    unsigned int arr2[1001];
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        scanf("%d",&c);
        for(d=0;d<c;d++)
        {
            scanf("%u",&arr[d]);
            }
            scanf("%d",&e);
    for(g=0;g<e;g++)
    {
        scanf("%u",&arr2[g]);
    }
    for(d=0;d<c-1;d++)
    {
        for(g=d+1;g<c;g++)
        {
            if(arr[d]>arr[g])
            {
                temp = arr[d];
                arr[d] = arr[g];
                arr[g] = temp;
            }}}
    for(d=0;d<e-1;d++)
    {
        for(g=d+1;g<e;g++)
        {
            if(arr2[d]>arr[g])
            {
                temp = arr2[d];
                arr2[d] = arr2[g];
                arr2[g] = temp;
            }}}
            min = 1000000;
    for(d=0;d<c;d++)
    {
        for(g=0;g<e;g++)
        {
            if(arr[d]>arr2[g])
            {
                x = arr[d] - arr2[g];}
                else
                    x = arr2[g]- arr[d];
                if(min>x)
                    min = x;}                   }
                    printf("%d\n",min);
                    }
                    }

