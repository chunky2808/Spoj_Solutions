#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,c,d,e,f,g,h,i;
    cin>>a;
   char ch[100000];
   char ch3[10000] = "machula";
   string pa;
   cin.ignore();
    for(b=0;b<a;b++)
    {
        cin.getline(ch,100000);
        d = strlen(ch);
        if(d==0)
        {
          b--;
        }
        else{
      for(c=0;c<d;c++)
      {
          if(ch[c]=='m')
            break;
      }
      g = c;//m
      for(c=0;c<d;c++)
      {
      if(ch[c]=='+')
        break;}
      e = c;//+
      for(c=0;c<d;c++)
      {
      if(ch[c]=='=')
        break;}
      f = c;//=//32 space
      int fir=0,sec=0,tri=0;
      int fla=0,fla2=0;
      int q=0;int po=0;
      for(c=0;c<d;c++)
      {
          if(ch[c]>=48 && ch[c]<=57)
          {
             // cout<<c<<" "<<po<<"\n";
              if((fla2==0) && (po==0))
          fir = (fir*10) + (int(ch[c])-48) ;
          else if((fla2==1) && (fla==0) && (po==2))
                sec = (sec*10) + (int(ch[c])-48);
                else
                 tri = (tri*10) + (int(ch[c])-48);
          }
          else if(c>=g && c<g+7)
          {
              if (fla2==0)
              {
              q = 1;
              }
              else if(fla2==1) //first
              {
                  if(fla ==0)
                  {
                      q=2;
                  }
                  else if(fla==1)
                  {
                      q=3;
                      break;
                  }
              }
          }
          else if(ch[c]=='+')
          {
           fla2=1;
          }
          else if(ch[c]=='=')
          {
              fla=1;
          }
          else if(ch[c]==' '){
           po++;}
      }
if(q==1)
{
    fir = tri -sec;
}
else if(q==2)
{
    sec = tri-fir;
}
else if(q==3)
{
    tri = fir + sec;
}
else{}
cout<<fir<<" + "<<sec<<" = "<<tri<<"\n";}
    }}
