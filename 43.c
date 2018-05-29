//输入n n个数放入数组num  
//找出最小数的下标 与第一个数交换 输出 
//输出行新数组 
#include<stdio.h>
#define maxn 110
int main (void)
{
	int n,minb;
	int i,t,j;
	int num[maxn];
	while(scanf ("%d",&n)&&n!=0) {
		minb=0;
		for (i=0;i<n;i++) {
			scanf ("%d",&num[i]);
			if (num[minb]>num[i]) {
				minb=i;
			}
		}
		t=num[minb];
		num[minb]=num[0];
		num[0]=t;
		for (j=0;j<n;j++) {
			printf ("%d ",num[j]);
		}
		printf ("\n");
	}
} 
