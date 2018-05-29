#include<stdio.h>
int main (void)
{
	//输入n 代表n组数据
	//输入ji tu
	//两个等式判断 
	int n,ji,tu,tou,tui;
	int i,flag;
	scanf ("%d",&n);
	for  (i=0;i<n;i++) {
		scanf ("%d %d",&tou,&tui);
		//printf("%d %d\n",tou,tui); 
		flag=0;
		for (ji=0;ji<tou;ji++) {
			tu=tou-ji;
			if (2*ji+4*tu==tui&&ji+tu==tou) {
				printf ("%d %d\n",ji,tu);
				flag=1;
				break;
			}
		}
		if (flag==0) {
			printf ("No answer\n");
		}
	}
}
