//
#include<stdio.h>
int main (void)
{
	int m,n;
	int sum,jin;
	while (1) {
		jin=0;
		sum=0;
		scanf("%d %d",&m,&n);
		if (m==0&&n==0) {
			break;
		}	
		while (m) {
			jin=jin*10+m%10;
			m/=10;
		}
		sum+=jin;
		jin=0;
		while (n) {
			jin=jin*10+n%10;
			n/=10;
		}
		sum+=jin;
		printf ("%d\n",sum);
	}
	
}
