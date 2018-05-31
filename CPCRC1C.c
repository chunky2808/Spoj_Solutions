#include<stdio.h>
int main()
{
long long int a,p,sum,sum2,b,c,d,e;
while(1){

scanf("%lld %lld",&a,&b);
if(a==-1&&b==-1)
    break;
else{

d=0;sum=0,sum2=0;
for(c=a;c<=b;c++)
{
    if(c<10)
    d = d+c;
    else
    {
        p = c;
        while(p>=1)
        {

            e = p%10;
            sum = sum + e;
            p = p/10;
            }
    }
}
sum2 = sum+d;
printf("%lld\n",sum2);
}}

}
