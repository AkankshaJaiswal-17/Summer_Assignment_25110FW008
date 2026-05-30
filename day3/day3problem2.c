#include<stdio.h>

int main()
{

int num,i,j,count=0;

printf("Enter any number:");
scanf("%d",&num);

for(i=2;i<=num;i++){
    count=0;
for(j=1;j<=i;j++)
{
    if(i%j==0)
    {
        count=count+1;
    }}

if(count==2
)
{
    printf("%d\n",i);
}}

return 0;

}