#include<stdio.h>

int main()
{
    int n,b;
    while(1){
    scanf("%d",&n);
    if(n==0)
        break;
    else{
            b = (n*(n+1)*((2*n)+1))/6;
            printf("%d\n",b);
    }}}
