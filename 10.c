#include<stdio.h> 
int main (void)
{
	//����a,b,c
	//��10��100��Ȣ�������жϣ�����3 5 7�������Ƿ���a,b,c
	//�����ж�FLAG ��������ڵĻ����No answer
	//������
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
