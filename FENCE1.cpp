#include<bits/stdc++.h>
using namespace std;
int main()
{
double a,b,c;
while(1)
{
    cin>>a;b=0.0;c=0.0;
    if(a==0.0)break;
    else
    {
     b = a/ (3.14159);
     c = (3.14159)*(b)*(b);
     c=c/2.0;
     printf("%.2f\n",c);
    }
}}
