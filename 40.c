#include<stdio.h>  
//��������ʼ����ͷ����һ��ʼ��׼����һ����ά����ģ������������Խģ��
//Խ���ӣ���������ϲ����£������Ǹ���ѧ����֪ʶ������
//�о��е�� 
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
