#include <bits/stdc++.h>
using namespace std;
int top = 0,top2;
int push(int arr3[],int x)
{


        arr3[++top] = x;

}
int pop()
{
   top = top - 1;
    }

int topi(){
return top;
}
bool isempty(){
    if (top == -1)
    return false;
    else
        return true;
}



int main()
{
    int a,b,c,d,e,f,g,h,i,m;

    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        else
        {
        int arr[a+1],arr2[a+1],arr3[a+1];
          bool arr4[a+1];
          memset(arr4,false,sizeof(arr4));
        for(b=0;b<a;b++)
        {
            scanf("%d",&arr[b]);
            arr2[b] = arr[b];
        }
        sort(arr,arr+a);//arr sorted arr2 original       1 2     2 1   a=2;
        g=0;

        for(b=0;b<a;b++)
        {
            for(c=0;c<a;c++)
            {

        if(arr2[c]!=arr[b])
        {
            if(arr2[c]==-1)
                {
               if(arr3[topi()]==arr[b])
                {
                    //cout<<b<<" "<<c<<topi<<" "<<arr[c]<<" "<<arr3[topi()]<<"\n";
                pop();arr4[b]=true;break;
                }
               else
               {
               }
                }
            else if(arr2[c]==0){}
            else{
            push(arr3,arr2[c]);
            arr2[c]= -1;}
        }
       else  if(arr2[c]==arr[b])
       {
           arr2[c]=0;arr4[b]=true;break;
       }}
       //cout<<"value of arr4"<<arr4[b]<<"\n";
      if(arr4[b]==false)break;
        }

      g=0;
        for(b=0;b<a;b++)
        {
            if(arr4[b]==false)
            {
                g++;
            }
        }
        if(g==0)
        {
            cout<<"yes\n";
        }
        else
            cout<<"no\n";

        while(topi()!=-1)
        {
            pop();
        }
        }

        }
        }
