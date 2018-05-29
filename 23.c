#include<stdio.h>
int main (void)
{
	//输入n代表n组测试数据
	//输入m,x,y,z分别为 先跑分钟数 弟 兄 狗
	//计算狗跑的时间 用兄弟间的距离除以速度差
	//输出狗跑的距离保留两位小数
	int n,m,x,y,z;
	double time,juli,suducha;
	scanf ("%d",&n);
	while(n--) {
		scanf ("%d %d %d %d",&m,&x,&y,&z);
		suducha=(double)(y-x);
		//printf ("%lf",suducha);
		time=m*x/suducha;
		juli=(double)time*z;
		printf ("%.2lf\n",juli);
	}
}
