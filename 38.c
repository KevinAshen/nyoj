#include<stdio.h>  
#include<math.h>  
int main(void)  
{  
	//����T������ ����LDR�� �� �뾶
	//�������Բ�ļ�ľ��� 
	//�Լ������һ���м���·���� 
    int T,ans;  
    double L,D,R,s,sum;  
    scanf("%d",&T);  
    while(T--) {  
        scanf("%lf%lf%lf",&L,&D,&R);  
        s=2*sqrt(R*R-(D/2)*(D/2));  
        if(R<=D/2||s<1) {  
           printf("impossible\n");  
           continue;  
        }  
        sum=s;  
        ans=1;  
        while(sum<L){  
            sum+=s;  
            ans++;  
        }  
        printf("%d\n",ans);  
    }   
 }   
