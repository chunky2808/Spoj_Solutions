#include<stdio.h>
int main()
{
    unsigned long long int a;
    int b,c,d,e;
    scanf("%llu",&a);
    while (a > 1)
  {if (a % 2 == 0)
  {
    a= a/2;
}
     else{
    a = 3*a +3;
    printf("NIE");
    break;}
}
if(a<=1)
    printf("TAK");
}
