#include<stdio.h>
int main (void)
{
	//输入三个数
	//挨个比较，小的放前面
	//输出新的顺序
	int a,b,c,t;
	scanf ("%d %d %d",&a,&b,&c);
	if (a>b) {
		t=b;
		b=a;
		a=t;
	} 
	if (b>c) {
		t=b;
		b=c;
		c=t;		
	}
	if (a>b) {
		t=b;
		b=a;
		a=t;
	} 
	printf ("%d %d %d",a,b,c);
} 
