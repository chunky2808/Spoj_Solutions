#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    cin>>a;char ch;e=0;g=0;f=0;
    for(b=0;b<a;b++)
    {
        fflush(stdin);
        cin>>c>>ch>>d;
        if(c==1)
        {
            if(d==2)//1/2
            {e++;
            }//1/2
            else{f++;}//1/4
        }
        else{
            g++;//3/4
        }
    }
    f = f-g;
    if(e%2!=0 &&e>0)//1/2
    {h=j%4;
       j = e%2;
       j= j*2;
        if(h>0 && f>0)
        {
            j = j - h;
            f = f - h;
        }}
      if(f%4!=0 && f>0)
      {
          i = f%4;
          i = 4-i;
          if(i>=2)
          {
              if(e>0)
              {e = e - i/2;
              }
          }
      }else{}
      if(g<0)g=0;if(f<0)f=0;if(e<0)e=0;
      if(e%2!=0){e = e/2 +1;}else{e=e/2;}
      if(f%4!=0){f = f/4 +1;} else{f=f/4;}
      int sum = 1+g+f+e;
      cout<<sum<<"\n";}
