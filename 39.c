#include<stdio.h>
int main(void)
{
	//居然是个严肃的数学问题 关键是两边加一 看出n+1=（i+1）*（j+1） 
    int t;
    int n,i,count;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        for(i=2,count=0;i*i<=(n+1);i++) {
            if((n+1)%i==0) {//能除尽就说明了j的存在 
                count++;
        	}
        }
        printf("%d\n",count);
    }
}
