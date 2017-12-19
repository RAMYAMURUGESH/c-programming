#include<stdio.h>
int largest(int a[],int n)
{
int i,j,t,max;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<n;i++)
{
max=a[0];
}
return max;
}
int main()
{
int n,a[10],i;
scanf("%d",&n);
printf("\n ENTER THE ARRAY ELEMENTS:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int max=largest(a,n);
printf("\n%d",max);
return 0;
}

