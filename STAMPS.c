#include<stdio.h>
#define MAX 1001
void mergeSort(int arr[],int low,int mid,int high);

void partition(int arr[],int low,int high);

int main(){

int merge[MAX],i,n,a,b,c,d,e,f,g;
scanf("%d",&a);
 for(e=1;e<=a;e++)
    {
 scanf("%d %d",&b,&n);
for(d=0;d<n;d++)
{
        scanf("%d",&merge[d]);
}
partition(merge,0,n-1);
g=0;f=0;
int sum=0;
for(d=0;d<n;d++)
{

    if(sum<b)
    {
 sum = sum+merge[d];
 g++;}
  else if(sum>=b){
   f++;
}
}
if(f>0)
{
    printf("Scenario #%d:\n%d\n",e,g);
printf("\n");
}
else{
if(sum>=b )
{
     printf("Scenario #%d:\n%d\n",e,g);
printf("\n");
}
else{
 printf("Scenario #%d:\nimpossible\n",e);
 printf("\n");}
}
}}
void partition(int arr[],int low,int high){

int mid;
if(low<high){
mid=(low+high)/2;
partition(arr,low,mid);
partition(arr,mid+1,high);
mergeSort(arr,low,mid,high);
}
}

void mergeSort(int arr[],int low,int mid,int high){
int i,m,k,l,temp[MAX];
l=low;
i=low;
m=mid+1;
while((l<=mid)&&(m<=high)){

if(arr[l]<=arr[m]){
temp[i]=arr[m];
m++;
}

else{
temp[i]=arr[l];
l++;
}
i++;
}

if(l>mid){
for(k=m;k<=high;k++){
temp[i]=arr[k];
i++;
}
}

else{
for(k=l;k<=mid;k++){
temp[i]=arr[k];
i++;
}
}
for(k=low;k<=high;k++){
arr[k]=temp[k];
}
}
