#include<stdio.h>
int main (void)
{
	int n,i,j,f1=1,f2=1,f3=2;
	int a[10];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		f3=f1+f2;
		if (a[i]>=3)
		{
			for (j=3;j<a[i];j++)
			{
				f1=f2;
				f2=f3;
				f3=f1+f2;
			}
		}
		else
			f3=1;
		printf ("%d\n",f3);
	}
}
