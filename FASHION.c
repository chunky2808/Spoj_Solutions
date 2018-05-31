#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,n;
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        scanf("%d",&n);
        int arr[n],arr2[n];
        for(d=0;d<n;d++)
        {
            scanf("%d",&arr[d]);
        }

        for(d=0;d<n;d++)
        {
            scanf("%d",&arr2[d]);

        }

        for(d=0;d<n-1;d++)
        {
        for(e=d+1;e<n;e++)
         {
             if(arr[e]>arr[d])
             {
                 f = arr[e];
                 arr[e] = arr[d];
                 arr[d] = f;
             }
         }}

        for(d=0;d<n-1;d++)
        {
        for(e=d+1;e<n;e++)
         {
             if(arr2[e]>arr2[d])
             {
                 f = arr2[e];
                 arr2[e] = arr2[d];
                 arr2[d] = f;
             }
         }}
     int sum=0;
        for(d=0;d<n;d++)
        {
         arr[d] = arr[d] *arr2[d];
         sum = sum+arr[d];
        }
    printf("%d\n",sum);}
    }
