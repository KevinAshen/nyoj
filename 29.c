#include<stdio.h>  
int main(void)
{  
	//��ҳ����Ȼ���벻�����������Ѷ����ڶ���Ŀѽ
	//��������nֻ�̳飬ÿk�����ܻ�һ���µ��̣��������˼���
	//����n���� k���һ�
	//�ؼ��ǻ������������µ��̻� 
    int t,n,k,sum;  
    scanf("%d",&t);  
    while(t--) {  
        scanf("%d %d",&n,&k);  
        sum=n;  
        while(n>=k) {  
            sum+=n/k;  
            n=n/k+n%k;   
        }  
        printf("%d\n",sum);  
    }    
}  
