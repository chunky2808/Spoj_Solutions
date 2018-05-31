#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,d,e,f,ap,gp,l;
while(1){
scanf("%d %d %d",&a,&b,&c);
if(a==0&&b==0&&c==0)
    break;
else{
if(b-a == c-b)
{
    d = c-b;
    d = d+c;
    printf("AP %d\n",d);
    d=0;
}
else
{
    d = b/a;
    d = d*c;
    printf("GP %d\n",d);
    d=0;
}}}}
