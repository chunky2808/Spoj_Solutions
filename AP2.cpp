#include<stdio.h>
int main()
{
    int x,b;
    long long int c,y,e,n,d,a;
    scanf("%d",&x);
    for(b=0;b<x;b++)
    {
        scanf("%lld %lld %lld",&c,&y,&e);

   n  =  (2*e)/(c+y);
   d = (y-c)/(n-5);
   a = c- (2*d);
   printf("%lld\n",n);
   while(n>0)
   {
       printf("%lld ",a);
       a = a+d;
       n--;
   }
   printf("\n");}}
