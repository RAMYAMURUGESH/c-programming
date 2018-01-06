
#include<stdio.h>
void main()
{
	int n1,n2,a[10],b[10],i;
	printf("ENTER THE FIRST ARRAY SIZE:\n");
	scanf("%d",&n1);
	printf("\nENTER THE SECOND ARRAY SIZE:\n");
	scanf("%d",&n2);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		printf("%d  ",a[i]);
	}
	for(i=0;i<n2;i++)
	{
		printf("%d  ",b[i]);
	}

	
}
