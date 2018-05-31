#include<stdio.h>
#include<math.h>
int main()
{
  int a,k=0,x,j,t=0,q=2,r,b,c,d,e=0,arr[100],w;
  scanf("%d",&a);
  for(b=0;b<a;b++)
  {
   scanf("%d",&c);
   if(c%2==0)
   {
   x=0;
   j = c;
   while(j>=1)
   {
       d = j%2;
       arr[x] =d;
       j = j/2;
x++;
   }
   k=x-1;t=0;
   for(d=0;d<x;d++)
   {
           r = pow(2,k);
           t = t + r*arr[d];
       k--;
   }

   printf("%d\n",t);
    }

   else
    printf("%d\n",c);

   }
   }
