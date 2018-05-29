#include<stdio.h>  
int main(void)  
{  
	//输入12月的钱
	//算综合 输出平均值 两位小数 
    int i=12;  
    double m,sum;  
   	while(i--) {  
        scanf("%lf",&m);  
        sum+=m;  
    }  
    printf("%.2lf",sum/12);  
}   
