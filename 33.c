#include<stdio.h>
#define PI 3.1415926
int main (void)
{
	//����뾶r
	//�������� 4/3*PI*r*r*r 
	double r,s;
	while(scanf("%lf",&r)!=EOF) {
		s=4/3.0*PI*r*r*r;
		printf ("%.f\n",s); 
	}
}
