#include<stdio.h>
int main(void)
{
	//��Ȼ�Ǹ��������ѧ���� �ؼ������߼�һ ����n+1=��i+1��*��j+1�� 
    int t;
    int n,i,count;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        for(i=2,count=0;i*i<=(n+1);i++) {
            if((n+1)%i==0) {//�ܳ�����˵����j�Ĵ��� 
                count++;
        	}
        }
        printf("%d\n",count);
    }
}
