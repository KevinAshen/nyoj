#include<stdio.h>
#include<string.h>
#define maxn 1000 
int a[maxn];
int main (void)
{
	//����n���ƣ�k����
	//��ʼ��ȫ�أ�ÿ�����������µ�
	//��������Ϊ�ƣ���0����1
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
