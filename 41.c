#include<stdio.h>
//输入T组数据 字母x与数字y
//用ASCII码解决值的问题
//输出和sum 
int main (void)
{
	int T,y,sum;
	char x;
	scanf ("%d",&T);
	getchar();
	while(T--) {
		scanf ("%c %d",&x,&y);
		getchar();
		//printf ("%c %d123\n",x,y);
		if ('a'<=x&&'z'>=x) {
			sum=(x-'a'+1)*(-1)+y;
		} else {
			sum=(x-'A'+1)+y;
		}
		printf ("%d\n",sum);
	} 
}
