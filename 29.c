#include<stdio.h>  
int main(void)
{  
	//网页翻竟然翻译不出来，看来难度在于读题目呀
	//大意是有n只烟抽，每k根烟能换一个新的烟，算最后抽了几根
	//输入n根烟 k个兑换
	//关键是换的烟又有了新的烟灰 
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
