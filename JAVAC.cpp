#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    char ch[101];
    while(scanf("%s",&ch)==1)
    {
    //getline(cin,ch);
    a = strlen(ch);//.size();//cout<<a<<" "<<int(ch[0])<<"\n";
    c=0;d=0;e=0;
        for(b=0;b<a;b++)
        {
            if(ch[b]>='A' && ch[b]<='Z')
            {
                c++;
            }
            else if(ch[b]>='a' && ch[b]<='z')
                d++;
            else if(ch[b]=='_')
                e++;
        }
        if(c>0 && e>0)
        {
            cout<<"Error!\n";
        }
        else if(d>0 && e>0)
        {
            for(b=0;b<a;b++)
            {
                if(ch[b]>='a' && ch[b]<='z')
                    cout<<ch[b];
                else if(ch[b]=='_')
                {b++;
                    cout<<char(ch[b]-32);
                }
                else cout<<ch[b];
            }cout<<"\n";
        }
        else if(c>0 && d>0)
        {
             for(b=0;b<a;b++)
            {

            if(ch[b]>='a' && ch[b]<='z')
                    cout<<ch[b];
            else if(ch[b]>='A' && ch[b]<='Z')
            {
                cout<<'_';
                cout<<char(ch[b]+32);
            }
            else cout<<ch[b];
        }cout<<"\n";
        }
        else
        {
             for(b=0;b<a;b++)
            {
            cout<<ch[b];
        }
        cout<<"\n";}

    }}
