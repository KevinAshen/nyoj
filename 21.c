#include<stdio.h>
int main (void)
{
	//����m��n
	//��m��n����λ������ӣ�����ÿһλ����λ����������һλʱ������Ӧ��
	//����ܵĽ�λ
	//��m��n��Ϊ0�����
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
