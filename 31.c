#include<stdio.h>
#include<math.h>
int main (void)
{
	//����n����n������
	//����x1,x2,y1,y2ȫ��ʵ��
	//������� dis ���
	int n;
	double x1,x2,y1,y2,dis,squ;
	scanf ("%d",&n);
	while(n--) {
		scanf ("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
		squ=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		dis=sqrt(squ);
		printf ("%.2f\n",dis);
	} 
} 
