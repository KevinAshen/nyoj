#include<stdio.h>
int main (void)
{
	//输入m，n
	//将m，n的三位各自相加，计算每一位的增位，并且在下一位时加上相应的
	//输出总的进位
	//若m，n都为0则结束
	int m,n,ge,shi,bai,sum;
	int i;
	while(1) {
		sum=0;
		scanf ("%d %d",&m,&n);
		if (m==0&&n==0) {
			break;
		} else {
			ge=m%10+n%10;
			ge/=10;
			sum+=ge;
			//printf ("%d\n",sum);
			shi=m/10%10+n/10%10+ge;
			shi/=10;
			sum+=shi;
			bai=m/100+n/100+shi;
			bai/=10;
			sum+=bai;
			printf ("%d\n",sum);
		}
	} 
	return 0;
} 
