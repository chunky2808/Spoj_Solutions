#include<stdio.h>
int main()
{
    int a,b,c,d,e,h,sum;
    scanf("%d",&a);
    int arr[20];
    d=0;sum=0;e=a;
    while(1)
    {
        c=0;sum=0;
        while(e>=1)
    {
        arr[c] = e%10;
        sum = sum +(arr[c]*arr[c]);
        c++;
         e = e/10;
    }
    d++;
    if(sum==1){
            printf("%d\n",d);
    break;}
    else{
            if(sum<=9)
            {
                printf("-1");break;
            }
    }

        e = sum;
}}

