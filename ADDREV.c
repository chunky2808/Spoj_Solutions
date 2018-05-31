#include<stdio.h>
int main()
{
int a,b,c,d,rev=0,rem,rem2,rev2=0,sum=0,rem3,rev3=0;
scanf("%d",&a);
for(b=0;b<a;b++)
{
    rem = 0 ;rem3=0;rev =0;rev2=0;rev3=0;
    rem2=0;
    scanf("%d %d" ,&c,&d);
    while(c>=1)
    {
         rem = c%10;
         rev = rev*10 + rem;
         c = c/10;
    }
    while(d>=1)
    {
        rem2 = d%10;
        rev2 = (rev2)*10 + rem2;
        d = d/10;
    }
    sum = rev2 + rev;
    while(sum>=1)
    {
         rem3 = sum%10;
         rev3 = (rev3)*10 + rem3;
         sum = sum/10;
    }
    printf("%d\n",rev3);}}
