#include<stdio.h>  
int main(void)  
{  
	//����12�µ�Ǯ
	//���ۺ� ���ƽ��ֵ ��λС�� 
    int i=12;  
    double m,sum;  
   	while(i--) {  
        scanf("%lf",&m);  
        sum+=m;  
    }  
    printf("%.2lf",sum/12);  
}   
