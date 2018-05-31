#include<bits/stdc++.h>
using namespace std;
typedef long long int ii;
bool arr[1000001];
int main()
{

    ii a,b,c,d,e,f,g,h,i,m,k,n,o,p;
    bool arr2[502];int arr3[502];
    memset(arr2,false,sizeof(arr2));
    for(i=2;i<=sqrt(500);i++)
    {
        for(h=i*2;h<=500;h=h+i)
        {
            arr2[h] = true;
        }
    }
    m=0;
    for(i=2;i<=(500);i++)
    {
        if(arr2[i]==false)
        {
            arr3[m] = i;m++;
        }
    }
    cin>>a;
   for(b=0;b<a;b++)
   {
       cin>>c;
       d=29;e=0;ii po=0;
       while(1)
       {
           po=0;
           for(f=2;f<=d/2;f++)
           {
               if(d%f==0){
                 for(h=0;h<m;h++)
                 {
                     if(arr3[h]==f)
                        {
                        po++;}
                 }

                }}
                if(po>=3)
                {
                    e++;
                }
                if(e==c)
                {
                   cout<<d<<"\n";break;
                }else{}
                d++;
       }
   }
}
