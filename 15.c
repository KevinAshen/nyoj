#include<stdio.h>
int main (void)
{
	//����n����n������
	//�ó�ÿλ����
	//���� �ó�a����С��,b��С���� 
	//����a-b 
	//�ж�a-b��ԭ����c�Ƿ���� �������ѭ�� ��¼����
	// һ����� �������
	int n,sum_a,sum_b,cha,sum,count;
	int mei[5];
	int i,j,i1,j1,temp,cha1;
	scanf ("%d",&n);
	for (i=0;i<n;i++) {
		count=0;
		scanf("%d",&sum);
		cha=sum;
		do {
			sum=cha; 
			cha1=cha;
			count++;
			for (j=3;j>=0;j--) {
				mei[j]=cha1%10;
				cha1=cha1/10;
			}//��ÿλ����������
			for (i1=0;i1<3;i1++) {
				for (j1=i1+1;j1<4;j1++) {
					if (mei[i1]<mei[j1]) {
						temp=mei[i1];
						mei[i1]=mei[j1];
						mei[j1]=temp;
					}
				}
			} //�Ӵ�С����
			sum_a=mei[0]*1000+mei[1]*100+mei[2]*10+mei[3];
			sum_b=mei[3]*1000+mei[2]*100+mei[1]*10+mei[0];
			cha=sum_a-sum_b; 
		} while(cha!=sum);
		printf ("%d\n",count);
	} 
} 
