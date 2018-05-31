#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,a,b) for(i=a;i<b;i++)
#define FOr(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fs(a) fastscan(a)
#define ss set<ll>
#define vv vector<ll>
ll par=0;
void mere(int arr[],int a,int b,int c);
void mer(int arr[],int a,int b)
{
    int c,d,e,f,g;
    if(a==b)
        return ;
    c = (a+b)/2;
    mer(arr,a,c);
     mer(arr,c+1,b);
     mere(arr,a,c,b);
}

void mere(int arr[],int a,int b,int c)
{
    int d,e,f,g,h,i;
    int left[b-a+1];
    int right[c-b+1];e=0;f=0;i=a;
    for(d=a;d<=b;d++)
        left[e++] = arr[d];
    for(d=b+1;d<=c;d++)
        right[f++] =arr[d];
        a=0;b=0;
      //  cout<<"hi";
  while(a<e && b<f)
  {
      if(left[a]>right[b])
      {
          //cout<<left[a]<<" "<<right[b]<<"\n";
          arr[i++] = right[b++];par += (e-a);
      }
      else
      {
          arr[i++] = left[a++];
      }
  }
  if(a<e)
  {
      for(int ii=a;ii<e;ii++)
       {
        arr[i++]=left[ii];//par++;
        }
  }
  if(b<f)
  {
   for(int ii=b;ii<f;ii++)
        arr[i++]=right[ii];

  }
}
int main()
{
    ll a,b,c,d,e,f,g,h,m=0;
  cin>>h;
    For(g,0,h)
    {
cout<<"\n";
    cin>>a;
    int arr[a+1];
    For(b,0,a)
    {
    cin>>arr[b];}
    mer(arr,0,a-1);
    if(m==0)m=par;
    else
    {par = par -m;m=par;}
    cout<<par<<"\n";
}
}
