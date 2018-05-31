#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b=0,c;
    int z=2,x,y,w,q,u;

        while(2){
        cin>>a;
        if(a==0.00)
        {
            break;
        }
        else{
                z=2;b=0.00;c=1.00;
            while(1)
            {
                b = (b + (c/z));
                if(b>=a)
                    break;
                else{}
                z++;
            }
        }
        z = z-1;
        cout<<z<<" "<<"card(s)"<<"\n";

}

}
