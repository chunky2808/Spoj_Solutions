//using map
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string ch;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    cin>>a;
    for(b=0;b<a;b++)
    {
        cin>>c;
        cin.ignore();
        cin>>ch;
        string ch3 = "TTT";
        string ch4 = "TTH";
        string ch5 = "THT";
        string ch6 = "THH";
        string ch7 = "HTT";
        string ch8 = "HTH";
        string ch9 = "HHT";
        string ch10 = "HHH";

        string ch2;
        d = ch.size();
        int arr[9];
        memset(arr,0,sizeof(arr));
        for(e=0;e<=d-3;e++)
        {
            g=0;ch2.clear();
            for(f=e;f<e+3;f++)
            {
                ch2.push_back(ch[f]);
            }
           // cout<<ch2<<"\n";
            if(ch2==ch3)
            {
                arr[0]++;
            }
           else if(ch2==ch4)
            {
                arr[1]++;
            }
            else if(ch2==ch5)
            {
                arr[2]++;
            }
            else if(ch2==ch6)
            {
                arr[3]++;
            }
else if(ch2==ch7)
            {
                arr[4]++;
            }
else if(ch2==ch8)
            {
                arr[5]++;
            }
else if(ch2==ch9)
            {
                arr[6]++;
            }
else if(ch2==ch10)
            {
                arr[7]++;
            }
            //else
               //cout<<"hi\n";
            }
            int u=b+1;
           printf("%d ",u);
            for(int y=0;y<=7;y++)
                printf("%d ",arr[y]);
            printf("\n");
                        }}

