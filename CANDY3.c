#include<stdio.h>

int main()
{
    int a,b,c,d;
    unsigned long long int e=0,f;
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        printf("\n");
        e=0;
        scanf("%d",&c);
        for(d=1;d<=c;d++)
        {
            scanf("%llu",&f);
            e = (e%c+f%c)%c;
        }
        if(e==0)
            printf("YES\n");
        else
            printf("NO\n");
    }}
