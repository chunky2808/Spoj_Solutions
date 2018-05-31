#include<bits/stdc++.h>
using namespace std;
typedef pair <int,int> ii;
int main()
{

    int a,b,c,d,e,f,g,h,i,j,bb,cc,temp;
    cin>>cc;
   for(bb=0;bb<cc;bb++)
   {
       cin>>a;
        int arr[251];
       memset(arr,-1,sizeof(arr));
       e=a;
       if(e==1){j=1;arr[0]=1;}
       else{
       c=0;
       while(a>0)
       {
           b = a%10;
           a = a/10;
           arr[c] = b;
           c++;
       }
       /*for(d=0;d<c;d++)
        cout<<arr[d];*/
      d =   e-1;temp =0;
      while(d>0)
      {
          j=0;
          while(arr[j]!=-1)
          {
          f = d*arr[j] + temp;
          arr[j] = f%10;
          temp = f/10;j++;
         }
         if(temp>=1)
         {
             while(temp>0)
             {
                 arr[j] = temp%10;
                 temp = temp/10;j++;
             }
         }
         else{}
         d--;

   }}
   for(i=j-1;i>=0;i--)
   {
       cout<<arr[i];
   }
   cout<<"\n";
   }}
