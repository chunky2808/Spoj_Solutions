#include<iostream>
using namespace std;

int main()
{
int a,b,c,d,e,f;
for(a=4;a<1000000;a++)
{
    c=0;
    for(b=2;b<a;b++)
    {
        if(a%b==0)
           c++;
    }
    if(c>1)
        cout<<a<<"\n";
    }
    }


