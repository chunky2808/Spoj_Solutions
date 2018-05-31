#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,g,h,f;
    char ch[101],ch2;
    scanf("%d ",&a);
    for(b=0;b<a;b++)
    {
    gets(ch);
    c = strlen(ch);
    d=0;e=c-1;
   while(1)
   {
       ch2 = ch[d];
       ch[d] = ch[e];//iamj jami
       ch[e] = ch2;
       d++;e--;
       if(e < c/2)
        break;
   }g = c-1;
   int k=0;
   for(f=0;f<c;f++)
   {
       if(ch[f] == ch[g])
        k++;
        g--;
   }
   if(k==c)
    printf("YES\n");
   else
    printf("NO\n");
    }}
