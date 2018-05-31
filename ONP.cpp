#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,a,b) for(i=a;i<b;i++)
int main()
{
ll a,b,c,d,e,f,g,h,i,k,l=0,m;
cin>>a;

For(b,0,a)
{
 string ch;
 cin>>ch;
 string ch2,ch3,ch5;
 char hh;
 l = ch.size();
 stack<string> my;
 stack <char> op;
  For(m,0,l)
  {
     string ch4;
  if(ch[m]=='+' ||ch[m]=='-' ||ch[m]=='*' ||ch[m]=='/' ||ch[m]=='^')
    op.push(ch[m]);
  else if(ch[m]>=97 && ch[m]<=122)
 {
    ch5 = ch[m];
    my.push(ch5);
 }
 else if(ch[m]==')')
 {
    ch3= my.top();my.pop();
    ch2= my.top();my.pop();
    hh = op.top();op.pop();
    ch4 = ch2 + ch3 + hh;
   i = ch4.size();
    g = ch3.size();k=0;
    my.push(ch4);
 }
 }
 cout<<my.top()<<"\n";}}
