#include<stdio.h>
void main()
{
int a,sum=0,i;
scanf("%d",&a);
int b=a;
for(i=0;i<4;i++)
{
sum=sum+a;
a=(a*10)+b;
}
printf("%d",sum);
}
