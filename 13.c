#include<stdio.h>
int main (void)
{
	//����������
	//�����Ƚϣ�С�ķ�ǰ��
	//����µ�˳��
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
