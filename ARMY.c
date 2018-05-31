#include<stdio.h>
int main()
{

    int a,b,c,d,e,f,g,x,y,z,w,max,max2;

    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        printf("\n");
        scanf("%d %d",&c,&d);
        scanf("%d",&x);
         max = x;
        for(e=1;e<c;e++)
        {
            scanf("%d",&y);

         if(y>max)
            max = y;
            }

        scanf("%d",&z);
         max2 = z;
        for(f=1;f<d;f++)
        {
            scanf("%d",&w);

         if(w>max2)
            max2 = w;
            }   if(max>=max2)
                printf("Godzilla\n");
                else
                printf("MechaGodzilla\n");
                }}
