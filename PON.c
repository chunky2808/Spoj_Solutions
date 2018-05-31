#include<stdio.h>
#include<math.h>
int main()

{
    int a,b,d,e=0,f=0;
    unsigned long long int c;
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        scanf("%llu",&c);
        if(c==2)
            printf("YES\n");
            if(c==3)
            printf("YES\n");
        e=0;f=0;
        for(d=2;d<=sqrt(c);d++)
        {
           if(c%d==0)
            {
            printf("NO\n");
            f++;
            break;}

            else
             e++;
        }
        if(f==0 & e>0)
            printf("YES\n");
    }}
