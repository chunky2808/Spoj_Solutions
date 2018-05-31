#include<stdio.h>
int main()
{
int a,b,d,e=0,f=0,m;
int arr[10];
for(b=0;b<10;b++)
{
scanf("%d",&arr[b]);}e=0;
for(b=0;b<10;b++)
{
e = e+arr[b];
if(e==100)
{
break;
}
else if (e>100)
{
d = b;
break;
}
else{m++;}
}

if(e>100)
{
    f = e - arr[d];
}
if((e-100)==(100-f))
{
    printf("%d\n",e);
}
else{
    if((e-100)>(100-f))
{
    printf("%d\n",f);
}
    else
{
    printf("%d\n",e);
}
}
}
