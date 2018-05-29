#include<stdio.h>  
//这道题我最开始毫无头绪，一开始是准备拿一个二维数组模拟这个情况，但越模拟
//越复杂，最后在网上查了下，发现是个数学背景知识。。。
//感觉有点坑 
int main(void)  
{  
    int A,B;  
    int i,j,sum;  
    while(scanf("%d%d",&A,&B)!=EOF) {  
    	sum=0; 
        for(i=1;i<=A;i++)  {  
            for(j=1;j<=B;j++)  {  
                sum=sum+i*j;  
            }  
        }  
        printf("%d\n",sum);  
    }  
    return 0;  
}  
