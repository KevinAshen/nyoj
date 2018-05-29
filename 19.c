#include<stdio.h>
int main (void)
{
	//输入n代表n组测试数据 每组输入m 
	//对于小于等于n的奇数求阶乘
	//输出1加到m的奇阶乘
	int n,m,chen,he;
	int i,j;
	scanf ("%d",&n);
	while (n--){
		scanf ("%d",&m);
		he=0;
		m=m+1;
		while (--m) {
			chen=1;
			for (i=1;i<m+1;i+=2) {
				chen*=i;
			}
			he+=chen;
		}
		printf ("%d\n",he);
	} 
}
