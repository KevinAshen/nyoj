//输入N组数据 输入N个字符串 
//以字符串形式 
//原样输出 
#include<stdio.h>
#define maxn 20 
int main (void)
{
	int N;
	char s[maxn];
	scanf("%d",&N);
	while (N--) {
		scanf ("%s",s);
		getchar();
		printf ("%s\n",s);
	}
}
