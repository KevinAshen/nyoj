#include<stdio.h> 
int main (void)
{
	//输入a,b,c
	//从10到100（娶不到）判断，除以3 5 7的余数是否是a,b,c
	//设置判断FLAG 如果不存在的话输出No answer
	//输出结果
	int a,b,c,t=0,i;
	scanf ("%d %d %d",&a,&b,&c);
	for (i=10;i<100;i++) {
		if (i%3==a&&i%5==b&&i%7==c) {
			t=1;
			break;
		}
	} 
	if (t==1) {
		printf ("%d",i); 
	} else {
		printf ("No answer");
	}
}
