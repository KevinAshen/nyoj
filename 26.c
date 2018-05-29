#include<stdio.h>
#include<string.h>
#define maxn 10000010
char shu[maxn];
int main (void)
{
	//输入n代表n组数据
	//用字符串写入n组数
	//输出数据
	int n,sum;
	int i;
	scanf ("%d",&n);
	getchar();
	while(n--) {
		sum=0;
		gets(shu);
		for (i=1;i<strlen(shu);i++) {
			sum=10*sum+shu[i]-'0';
		}
		//printf ("%d\n",strlen(shu));
		printf ("%d\n",sum);
	} 
}
