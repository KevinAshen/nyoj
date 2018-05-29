#include<stdio.h>
#include<string.h> 
#define maxn 200
int main (void)
{
	//输入T组 N个订单 ABC代表订房数 开始日期 天数
	//将日期作为桶 计算每天用的房间数
	//桶中最大值就是输出room
	int T,N,A,B,C,max;
	int i,j;
	int day[maxn];
	scanf ("%d",&T);
	while(T--) {
		memset(day,0,sizeof(day));
		scanf ("%d",&N);
		while(N--) {
			scanf ("%d %d %d",&A,&B,&C);
			for (i=B;i<B+C;i++) {
				day[i]+=A;
			}
		}
		max=0;
		for (j=0;j<maxn;j++) {
			if (max<day[j]) {
				max=day[j];
			}
		}
		printf ("%d\n",max);
	} 
} 
