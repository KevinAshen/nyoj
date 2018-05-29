#include<stdio.h>
int main (void)
{
	int n,i,j;
	int a[50];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=1;j<a[i]+1;j++)
		{
			if(j%2==1)
				printf ("%d ",j);
		}
		printf ("\n");
		for (j=1;j<a[i]+1;j++)
		{
			if(j%2==0)
				printf ("%d ",j);
		}
		printf ("\n\n");
	}
} 
