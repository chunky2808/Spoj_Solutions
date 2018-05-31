#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,c,d,e,f,g,h;
    string ch;
    while(1)
    {
        cin>>ch;
        if(ch.size()==1 && ch[0]=='0')
        {
            break;
        }
        else
        {
            a = ch.size();
            ll arr[a+2];
            memset(arr,0,sizeof(arr));
            arr[0]=1;
            c=0;c = ch[0]-'0';
            for(b=1;b<a;b++)
            {
                if(b==1)
                    {
                        if((ch[b]-'0')>0 && (ch[b]-'0')<=26)
                        arr[b]=arr[b-1];
                        c = (c*10)+ (ch[b]-'0');
                        if(c<=26)
                            arr[1]+=1;
                    }
                else
                {
                 if((ch[b]-'0')>0 && (ch[b]-'0')<=26)
                        arr[b]=arr[b-1];
                c = (c*10)+ (ch[b]-'0');
                        if(c>=10 && c<=26)
                            arr[b]+=arr[b-2];
                }
//cout<<arr[b]<<"\n";
                    if(c>=10)c=c%10;
            }
            cout<<arr[a-1]<<"\n";
        }
    }
    return 0;
}

