#include<bits/stdc++.h>
using namespace std;
void fastscan(int &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }
int main()
{
    int a,b,c,d,e,f,g,h,i;
 a=1;
  while(a!=0)
  {
      fastscan(a);
       if(a==0)
        break;
       else{}
      int arr[a+1];
      for(b=1;b<=a;b++)
        fastscan(arr[b]);
      int arr2[a+1];
      memset(arr2,0,sizeof(arr2));
      for(b=1;b<=a;b++)
      {
          arr2[arr[b]] = b;
      }
      int flag=0;
      for(b=1;b<=a;b++)
      {
          if(arr[b]!=arr2[b])
          {
              flag=1;break;
          }
      }
      if(flag==1)
       printf("not ambiguous\n");
      else
        printf("ambiguous\n");
  }}
