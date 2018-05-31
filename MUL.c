#include<stdio.h>
int main()
{
   int a,b,c,d;
   long long int  p =1;
   scanf("%d\n",&a);
   for(b=0;b<a;b++)
   { p=1;
       scanf("%d %d",&c,&d);
       p = c*d;
       printf("%lld\n",p);
   }}
