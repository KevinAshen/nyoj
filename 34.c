#include<stdio.h>
int Triangle (int n);
int main (void)
{
	//输入N组测试数据 每个n
	//编写函数计算三角形的个数 以n*（n+1）/2
	//计算sum 1*T（2）
	//输出序号 n sum
	int N,n,sum;
	int i,j;
	scanf ("%d",&N);
	j=1;
	while (N--) {
		scanf ("%d",&n);
		sum=0;
		for (i=1;i<n+1;i++) {
			sum+=i*Triangle(i+1);
		}
		printf ("%d %d %d\n",j++,n,sum);
	}
}
int Triangle (int n)
{
	int tri;
	tri=n*(n+1)/2;
	return tri;
} 
