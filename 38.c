#include<stdio.h>  
#include<math.h>  
int main(void)  
{  
	//输入T组数据 输入LDR长 宽 半径
	//计算出两圆心间的距离 
	//以间距来算一共有几个路由器 
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
