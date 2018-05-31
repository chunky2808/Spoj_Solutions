#include<stdio.h>
    int main(){
        int a,b,c,d,e,x=0,y=0,f,z=0,q;
        float p;
        while(1){
        scanf("%d",&a);
        if(a==-1)
            break;
            int arr[a];
            float sum=0;
        for(b=0;b<a;b++)
        {
            scanf("%d",&arr[b]);
            sum = sum+arr[b];
        }
        p = sum/a;
        c = sum/a;
        p = p-c;
        x=0;
        sum=0;
        if(p==0)
        {
                for(b=0;b<a;b++)
                {
                    arr[b] = c - arr[b];
                    sum = sum + arr[b];
                    if(arr[b]>0)
                        x = x+arr[b];
                }
                if(sum==0)
                    printf("%d\n",x);
                }

                else
                    printf("-1\n");
                }}
