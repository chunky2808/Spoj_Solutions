#include<stdio.h>
#include<math.h>
#include <string.h>
int main()
{
int a,k,b,c,d,e,f,min,max,y,x,z;
char str[201],temp;
while(1){
scanf("%d",&a);
if(a==0)
        break;
        else{
scanf("%s",&str);
b = strlen(str);
    b = b/a;
char arr[b][a];
y=0;
z = a-1;
for(c=0;c<b;c++)
{
    z = a-1;
    for(d=0;d<a;d++)
    {
        if(c%2!=0)
        {arr[c][z] = str[y];
            z--;
        }
        else{
        arr[c][d] = str[y];

        }y++;
        }
        }

for(c=0;c<a;c++)
{
    for(d=0;d<b;d++)
    {
        printf("%c",arr[d][c]);}
        }
        printf("\n");
        }
        }
        }
