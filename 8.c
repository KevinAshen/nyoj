#include<stdio.h>
int main (void)
{
	int n=5,a,min=10001,max=0;
	while(n--) {
		scanf ("%d",&a);
		if (min>=a) {
			min=a;
		}
		if (max<=a) {
			max=a;
		}
	}
	printf ("%d %d",min,max);
} 
