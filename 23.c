#include<stdio.h>
int main (void)
{
	//����n����n���������
	//����m,x,y,z�ֱ�Ϊ ���ܷ����� �� �� ��
	//���㹷�ܵ�ʱ�� ���ֵܼ�ľ�������ٶȲ�
	//������ܵľ��뱣����λС��
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
