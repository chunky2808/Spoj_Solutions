#include<bits/stdc++.h>
using namespace std;
struct node
{
    int op;
    int clo;
    int to;
};

node seg[2000010];
void build(node * seg,int low,int high ,int pos ,char ch[])
{
    int mid;
if(low==high)
{
    if(ch[low]==')')
    {seg[pos].op=0;
    seg[pos].clo=1;
    seg[pos].to=0;}

    else
    {seg[pos].clo=0;
    seg[pos].op=1;
    seg[pos].to=0;
    }
    return;
}
else
{
    mid =(low+high)/2;
    build(seg,low,mid,(2*pos)+1,ch);
    build(seg,mid+1,high,(2*pos)+2,ch);
  int left = (2*pos)+1;
    int right = (2*pos)+2;
    int dif = min(seg[left].op,seg[right].clo);
    seg[pos].op += seg[left].op + seg[right].op-dif;
    seg[pos].clo += seg[left].clo + seg[right].clo-dif;
     return;
    }
}
void update(node * seg,int low ,int high,int pos,int idx,char* ch)
{
    int mid;
    if(low==high)
    {
        if(ch[idx]==')')
    {seg[pos].op=1;
    seg[pos].clo=0;
    seg[pos].to=0;
    ch[idx] = '(';
    }

    else
    {seg[pos].clo=1;
    seg[pos].op=0;
    seg[pos].to=0;
    ch[idx] = ')';
    }
    return;}

    else
    {
      mid = (low+high)/2;
        seg[pos].op=0;
        seg[pos].clo=0;
        seg[pos].to=0;
         if((idx>=low) && (idx<=mid))
         {
             update(seg,low,mid,(2*pos)+1,idx,ch);
         }
         else
         {
         update(seg,mid+1,high,(2*pos)+2,idx,ch);
         }
         int left = (2*pos)+1;
    int right = (2*pos)+2;
    int dif = min(seg[left].op,seg[right].clo);
    seg[pos].op += seg[left].op + seg[right].op-dif;
    seg[pos].clo += seg[left].clo + seg[right].clo-dif;
     return;
    }


    }
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    for(b=1;b<=10;b++)
{

for(k=0;k<200000;k++)
{
    seg[k].op=0;
    seg[k].clo =0;
    seg[k].to =0;
}
   scanf("%d",&a);
    char ch[a+1];
    scanf("%s",&ch);
    //cout<<ch<<"\n";
    build(seg,0,a-1,0,ch);

       printf("Test %d:\n",b);
       scanf("%d",&c);

    for(d=0;d<c;d++)
    {
    //for(k=0;k<10;k++)
//cout<<seg[k].to<<" ";

        scanf("%d",&e);
        if(e==0)
        {
           if((seg[0].op == 0) && (seg[0].clo ==0)){
            printf("YES\n");}
           else{

            printf("NO\n");}

        }
        else
        {
    update(seg,0,a-1,0,e-1,ch);
          }
    }

}}

