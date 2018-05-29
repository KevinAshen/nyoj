#include<stdio.h>
#include<string.h>
#define maxn 1000 
int a[maxn];
int main (void)
{
	//输入n个灯，k个人
	//开始灯全关，每个人依次碰下灯
	//用数组作为灯，关0，开1
	int n,k;
	int i,j,first=1;
	memset(a,0,sizeof(a));
	scanf ("%d %d",&n,&k);
	for (i=1;i<=k;i++) {
		for (j=i;j<=n;j++) {
			if (j%i==0) {
				a[j]=!a[j];
			}
		}
	}
	for (i=1;i<=n;i++) {
		if (a[i]) {
			if(first) {
				first=0;
			}
			else 
				printf(" ");
			printf("%d",i);
		}
	}
	printf ("\n");
	return 0;
} 
