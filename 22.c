#include<stdio.h>
#define max 12
int main (void)
{
	//����N������N���������
	//������ �� ��
	//��Ҫ�������꣬��ʮ�����µ���������һ�������� 
	//��������n 
	int N,nian,yue,ri,n;
	int i,flag;
	scanf ("%d",&N);
	while(N--) {
		int tian[max]={31,28,31,30,31,30,31,31,30,31,30,31};
		flag=0;
		n=0;
		scanf ("%d %d %d",&nian,&yue,&ri);
		if ((nian%4==0)&&(nian%100!=0)||(nian%400==0)) {//�ɻ� 
			tian[1]=29;
		}
		//printf ("%d",flag);
		yue-=1;
		while(yue--) {
			n+=tian[yue];
		}
		n+=ri;
		printf ("%d\n",n); 
	} 
}
